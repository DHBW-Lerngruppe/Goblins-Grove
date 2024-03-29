#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "UI_System.h"
#include "controls.h"
#include "dorf.h"
#include "hoehle.h"
#include "gameScreens.h"
#include "gegner.h"
#include "kampfsystem.h"

#define TIME 20000

int main()
{
    int endGame = 0;
    char inv[10][50] = {"Karte", "Glücksbringer", "Spickzettel für lineare Algebra", "Halbes Erdbeermarmeladenbrot mit Honig", "Schwert", "Bogen"};

    // Start-Menu
    printf("\e[1;1H\e[2J"); // Terminal clearen

    char start;
    menu();
    scanf(" %c", &start);

    printf("\e[1;1H\e[2J"); // Terminal clearen

    while (start != 'f')
    {
        menu();
        scanf(" %c", &start);

        printf("\e[1;1H\e[2J"); // Terminal clearen
    }

    // Prolog... SWI Prolog? o.O
    char text[] = "Mit einem dumpfen Kopfschmerz erwachst du in einem undurchdringlichen Wald. \n"
                  "Deine Erinnerungen sind verschwommen, und die Umgebung ist dir fremd. \n"
                  "Ein kalter Wind streicht durch die Bäume, während der Wald in geheimnisvollem Schweigen ruht. \n"
                  "Finde heraus, wer du bist, erkunde die verborgenen Geheimnisse und entwirre das Netz der mysteriösen Ereignisse. \n"
                  "Dein Abenteuer beginnt zwischen schattigen Baumstämmen und den rätselhaften Geräuschen der Natur. \n"
                  "Tauche ein und entdecke die Wahrheit hinter den Schatten des Waldes.\n";

    for (int i = 0; i < strlen(text); i++)
    {
        putchar(text[i]);
        fflush(stdout); // Ausgabepuffer direkt reinigen
        usleep(TIME);   // Verzögerung beim Tippen (100ms)
    }

    printf("─────────────────────────────────────────────\n");
    int kampfStatus = 0;
    while (endGame == 0)
    {
        int decision = controls();
        int decision2 = 0;

        // Auswahl Reise Inv, Dorf, Höhle oder Cheater -.- ...
        switch (decision)
        {
        case 1:
            if (kampfStatus == 0)
            {
                printf("\e[1;1H\e[2J"); // Terminal clearen
                kampfStatus = kampfsystem(gegnergruppe1, initializeGegnergruppe1());
            }

            if (kampfStatus == 1)
            {
                decision2 = dorf();

                if (decision2 == 1)
                {
                    strcpy(inv[6], "Schlüssel");
                }
            }
            if (kampfStatus == 2)
            {
                gameover();
                endGame = 1;
            }
            break;

        case 2:
            endGame = hoehle(inv);
            break;

        case 20:

            printf("\e[1;1H\e[2J"); // Terminal clearen

            printf("\033[1;94m"); // Hellblau

            printf("▪   ▐ ▄  ▌ ▐·▄▄▄ . ▐ ▄ ▄▄▄▄▄ ▄▄▄· ▄▄▄  \n");
            printf("██ •█▌▐█▪█·█▌▀▄.▀·•█▌▐█•██  ▐█ ▀█ ▀▄ █·\n");
            printf("▐█·▐█▐▐▌▐█▐█•▐▀▀▪▄▐█▐▐▌ ▐█.▪▄█▀▀█ ▐▀▀▄ \n");
            printf("▐█▌██▐█▌ ███ ▐█▄▄▌██▐█▌ ▐█▌·▐█ ▪▐▌▐█•█▌\n");
            printf("▀▀▀▀▀ █▪. ▀   ▀▀▀ ▀▀ █▪ ▀▀▀  ▀  ▀ .▀  ▀\n");

            printf("\033[0m"); // Standardfarbe

            usleep(200000);

            for (int i = 0; i < 10; i++)
            {
                if (strcmp(inv[i], "") != 0)
                {
                    usleep(200000);
                    printf("- %s\n", inv[i]);
                }
            }

            printf("\n─────────────────────────────────────────────\n");
            break;

        case 6942069:
            endGame = 1;
            break;
            
        default:
            printf("Keine gültige Auswahl!\n");
            break;
        }
    }

    return 0;
}