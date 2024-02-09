#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "UI_System.h"
#include "controls.h"
#include "dorf.h"
#include "höhle.h"
#include "gameScreens.h"
#include "gegner.h"
#include "kampfsystem.h"

int main()
{
    int endGame = 0;
    int time = 0;
    char inv[10][50] = {"Karte", "Glücksbringer", "Formelsammlung für lineare Algebra", "Erdbeermarmeladenbrot mit Honig"};

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

    // Prolog
    char text[] = "Mit einem dumpfen Kopfschmerz erwachst du in einem undurchdringlichen Wald. \n"
                  "Deine Erinnerungen sind verschwommen, und die Umgebung ist dir fremd. \n"
                  "Ein kalter Wind streicht durch die Bäume, während der Wald in geheimnisvollem Schweigen ruht. \n"
                  "Finde heraus, wer du bist, erkunde die verborgenen Geheimnisse und entwirre das Netz der mysteriösen Ereignisse. \n"
                  "Dein Abenteuer beginnt zwischen schattigen Baumstämmen und den rätselhaften Geräuschen der Natur. \n"
                  "Tauche ein und entdecke die Wahrheit hinter den Schatten des Waldes.\n";

    for (int i = 0; i < strlen(text); i++)
    {
        putchar(text[i]);
        fflush(stdout); // Stellt sicher, dass der Ausgabepuffer sofort geleert wird
        usleep(time); // Verzögerung von 100 Millisekunden zwischen jedem Zeichen
    }

    printf("─────────────────────────────────────────────\n");

    while (endGame == 0)
    {
        int decision = controls();
        int decision2 = 0;
        switch (decision)
        {
        case 1:
            kampfsystem(gegnergruppe1, initializeGegnergruppe1());
            decision2 = dorf();
            if (decision2 == 1)
            {
                strcpy(inv[4], "Schlüssel");
            }
            break;
        case 2:
            höhle(inv);
            break;
        case 20:

            printf("\e[1;1H\e[2J"); // Terminal clearen

            printf("\033[1;94m"); // Helle Blaufarbe

            // ASCII-Art in Hellblau ausgeben
            printf("▪   ▐ ▄  ▌ ▐·▄▄▄ . ▐ ▄ ▄▄▄▄▄ ▄▄▄· ▄▄▄  \n");
            printf("██ •█▌▐█▪█·█▌▀▄.▀·•█▌▐█•██  ▐█ ▀█ ▀▄ █·\n");
            printf("▐█·▐█▐▐▌▐█▐█•▐▀▀▪▄▐█▐▐▌ ▐█.▪▄█▀▀█ ▐▀▀▄ \n");
            printf("▐█▌██▐█▌ ███ ▐█▄▄▌██▐█▌ ▐█▌·▐█ ▪▐▌▐█•█▌\n");
            printf("▀▀▀▀▀ █▪. ▀   ▀▀▀ ▀▀ █▪ ▀▀▀  ▀  ▀ .▀  ▀\n");

            // Zurücksetzen auf Standardfarbe
            printf("\033[0m");

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
        default:
            printf("Keine gültige Auswahl!\n");
            break;
        }
    }

    return 0;
}