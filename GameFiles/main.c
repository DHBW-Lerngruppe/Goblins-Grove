#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "UI_System.h"
#include "controls.h"
#include "dorf.h"
#include "höhle.h"

int main()
{
    int endGame = 0;

    
    char **inv = malloc(4 * sizeof(char *)); // Array für Zeiger auf Strings
    inv[0] = "Karte";
    inv[1] = "Glücksbringer";
    inv[2] = "Formelsammlung";
    inv[3] = "Erdbeermarmeladenbrot mit Honig";

    int inventorySize = 4; // Anfangsgröße des Inventars

    printf("\e[1;1H\e[2J"); // Terminal clearen

    printf("Mit einem dumpfen Kopfschmerz erwachst du in einem undurchdringlichen Wald. \n"
           "Deine Erinnerungen sind verschwommen, und die Umgebung ist dir fremd. \n"
           "Ein kalter Wind streicht durch die Bäume, während der Wald in geheimnisvollem Schweigen ruht. \n"
           "Finde heraus, wer du bist, erkunde die verborgenen Geheimnisse und entwirre das Netz der mysteriösen Ereignisse. \n"
           "Dein Abenteuer beginnt zwischen schattigen Baumstämmen und den rätselhaften Geräuschen der Natur. \n"
           "Tauche ein und entdecke die Wahrheit hinter den Schatten des Waldes.\n");

    // UI(10);
    while (endGame == 0)
    {
        int decision = controls();
        switch (decision)
        {
        case 1:
            dorf();
            break;
        case 2:
            printf("Du gehst in den Wald\n");
            break;
        case 3:
            höhle(inv, 5, "Schlüssel");
            break;
        case 20:
            printf("\nDu öffnest deinen Beutel und siehst folgendes: \n");
            for (int i = 0; i < inventorySize; i++)
            {
                if (strlen(inv[i]) > 0)
                { // Überprüfe, ob das Element nicht leer ist
                    printf("- %s\n", inv[i]);
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