#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "UI_System.h"
#include "controls.h"
#include "dorf.h"
#include "höhle.h"
#include "menu.h"

int main()
{
    int endGame = 0;

    char inv[10][50] = {"Test", "Test2"};

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
    printf("Mit einem dumpfen Kopfschmerz erwachst du in einem undurchdringlichen Wald. \n"
           "Deine Erinnerungen sind verschwommen, und die Umgebung ist dir fremd. \n"
           "Ein kalter Wind streicht durch die Bäume, während der Wald in geheimnisvollem Schweigen ruht. \n"
           "Finde heraus, wer du bist, erkunde die verborgenen Geheimnisse und entwirre das Netz der mysteriösen Ereignisse. \n"
           "Dein Abenteuer beginnt zwischen schattigen Baumstämmen und den rätselhaften Geräuschen der Natur. \n"
           "Tauche ein und entdecke die Wahrheit hinter den Schatten des Waldes.\n");

    while (endGame == 0)
    {
        int decision = controls();
        int decision2 = 0;
        switch (decision)
        {
        case 1:
            decision2 = dorf();
            if (decision2 == 1)
            {
                strcpy(inv[3], "Schlüssel");
            }
            break;
        case 2:
            printf("Du gehst in den Wald\n");
            break;
        case 3:
            höhle(inv);
            break;
        case 20:
            printf("\nDu öffnest deinen Beutel und siehst folgendes: \n");

            for (int i = 0; i < 10; i++)
            {
                if (strcmp(inv[i], "") != 0)
                {
                    printf("%s\n", inv[i]);
                }
            }

            break;
        default:
            printf("Keine gültige Auswahl!\n");
            break;
        }
    }

    return 0;
}