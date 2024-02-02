#include <stdio.h>
#include <controls.h>

int controls()
{
    int decision;
    printf("Wähle aus folgenden Optionen aus:\n");
    printf("1 - Reisen\n");
    scanf("%d", decision);

    switch (decision)
    {
    case 1:
        printf("Du begibst dich auf eine Reise.\n");
        break;
    
    default:
        printf("Keine Gültige Auswahl!\n");
        break;
    }
}

