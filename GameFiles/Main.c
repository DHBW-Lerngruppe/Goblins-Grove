#include <stdio.h>
#include "UI_System.h"
#include "controls.h"

int main()
{

    // UI(10);
    int decision = controls();
    switch (decision)
    {
    case 1:
        printf("Du gehst ins Dorf\n");
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