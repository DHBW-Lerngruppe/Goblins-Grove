#include <stdio.h>
#include "UI_System.h"
#include "controls.h"
#include "dorf.h"

int main()
{
    printf("\e[1;1H\e[2J"); // Terminal clearen

    printf("Mit einem dumpfen Kopfschmerz erwachst du in einem undurchdringlichen Wald. \n"
           "Deine Erinnerungen sind verschwommen, und die Umgebung ist dir fremd. \n"
           "Ein kalter Wind streicht durch die Bäume, während der Wald in geheimnisvollem Schweigen ruht. \n"
           "Finde heraus, wer du bist, erkunde die verborgenen Geheimnisse und entwirre das Netz der mysteriösen Ereignisse. \n"
           "Dein Abenteuer beginnt zwischen schattigen Baumstämmen und den rätselhaften Geräuschen der Natur. \n"
           "Tauche ein und entdecke die Wahrheit hinter den Schatten des Waldes.\n");

    // UI(10);
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
        printf("Du gehst in die Höhle\n");
        break;
    case 20:
        printf("Du öffnest dein Inventar\n");
        break;
    default:
        printf("Keine gültige Auswahl!\n");
        break;
    }
    return 0;
}