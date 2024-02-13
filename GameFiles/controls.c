#include <stdio.h>
#include "controls.h"
#include "gameScreens.h"

int reisen();

int controls()
{
    printf("\033[1;94m"); // Helle Blaufarbe
    printf(" ▄▄▄· ▄ •▄ ▄▄▄▄▄▪         ▐ ▄ ▄▄▄ . ▐ ▄ \n");
    printf("▐█ ▀█ █▌▄▌▪•██  ██ ▪     •█▌▐█▀▄.▀·•█▌▐█\n");
    printf("▄█▀▀█ ▐▀▀▄· ▐█.▪▐█· ▄█▀▄ ▐█▐▐▌▐▀▀▪▄▐█▐▐▌\n");
    printf("▐█ ▪▐▌▐█.█▌ ▐█▌·▐█▌▐█▌.▐▌██▐█▌▐█▄▄▌██▐█▌\n");
    printf(" ▀  ▀ ·▀  ▀ ▀▀▀ ▀▀▀ ▀█▄▀▪▀▀ █▪ ▀▀▀ ▀▀ █▪\n");
    printf("\033[0m"); // Zurücksetzen auf Standardfarbe

    int decision = 0;
    int finalDecision = 0;

    printf("Wähle aus folgenden Aktionen aus:\n");
    printf("1 - Reisen\n");
    printf("2 - Inventar öffnen\n");

    scanf("%d", &decision);
    printf("\e[1;1H\e[2J"); // wichtig um das Terminal zu clearen

    //Auswahlmenü ob Reise oder Invetar geöffnet wird
    //Cheatcode: 6942069
    switch (decision)
    {
    case 1:
        finalDecision = reisen();
        break;

    case 2:
        finalDecision = 20;
        break;

    case 6942069:
        finalDecision = 6942069;
        endScreen();
        break;

    default:
        break;
    }
    return finalDecision;
}

int reisen()
{
    int decision = 0;
    printf("\033[1;94m"); // Helle Blaufarbe

    // ASCII-Art in Hellblau ausgeben
    printf("▄▄▄  ▄▄▄ .▪  .▄▄ · ▄▄▄ . ▐ ▄ \n");
    printf("▀▄ █·▀▄.▀·██ ▐█ ▀. ▀▄.▀·•█▌▐█\n");
    printf("▐▀▀▄ ▐▀▀▪▄▐█·▄▀▀▀█▄▐▀▀▪▄▐█▐▐▌\n");
    printf("▐█•█▌▐█▄▄▌▐█▌▐█▄▪▐█▐█▄▄▌██▐█▌\n");
    printf(".▀  ▀ ▀▀▀ ▀▀▀ ▀▀▀▀  ▀▀▀ ▀▀ █▪\n");

    // Zurücksetzen auf Standardfarbe
    printf("\033[0m");

    printf("Wohin möchtest du reisen?\n");
    printf("1 - Dorf\n");
    printf("2 - Höhle\n");

    scanf("%d", &decision);

    return decision;
}