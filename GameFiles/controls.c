#include <stdio.h>
#include "controls.h"

int reisen();

int controls()
{
    printf("\033[1;94m"); // Helle Blaufarbe
    printf(" ▄▄▄· ▄ •▄ ▄▄▄▄▄▪         ▐ ▄ ▄▄▄ . ▐ ▄ \n");
    printf("▐█ ▀█ █▌▄▌▪•██  ██ ▪     •█▌▐█▀▄.▀·•█▌▐█\n");
    printf("▄█▀▀█ ▐▀▀▄· ▐█.▪▐█· ▄█▀▄ ▐█▐▐▌▐▀▀▪▄▐█▐▐▌\n");
    printf("▐█ ▪▐▌▐█.█▌ ▐█▌·▐█▌▐█▌.▐▌██▐█▌▐█▄▄▌██▐█▌\n");
    printf(" ▀  ▀ ·▀  ▀ ▀▀▀ ▀▀▀ ▀█▄▀▪▀▀ █▪ ▀▀▀ ▀▀ █▪\n");
    // Zurücksetzen auf Standardfarbe
    printf("\033[0m");


    int decision = 0;
    int finalDecision = 0;
    printf("Wähle aus folgenden Aktionen aus:\n");
    printf("1 - Reisen\n");
    printf("2 - Inventar öffnen\n");
    scanf("%d", &decision);
    printf("\e[1;1H\e[2J"); // Terminal clearen

    switch (decision)
    {
    case 1:
        finalDecision = reisen();
        break;
    case 2:
        finalDecision = 20;
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

    switch (decision)
    {
    case 1:
        break;
    case 2:
        break;
    default:
        break;
    }
    return decision;
}