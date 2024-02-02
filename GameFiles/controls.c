#include <stdio.h>
#include "controls.h"

int reisen();


int controls()
{
    int decision = 0;
    int finalDecision = 0;
    printf("Wähle aus folgenden Optionen aus:\n");
    printf("1 - Reisen\n");
    printf("2 - Inventar öffnen\n");
    scanf("%d", &decision);

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

    printf("\nWohin möchtest du reisen?\n");
    printf("1 - Dorf\n");
    printf("2 - Wald\n");
    printf("3 - Höhle\n");

    scanf("%d", &decision);

    switch (decision)
    {
    case 1:
        break;
    case 2: 
        break;
    case 3: 
        break;
    default:
        break;
    }
    return decision;
}