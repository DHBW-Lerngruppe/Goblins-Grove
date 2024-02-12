#include <stdio.h>
#include "UI_System.h"

#define MAXHEALTH 10

int UI(int health)
    {

        printf("\x1b[31mHealth: ");

        for (int i = 0; i < health; i++)
        {
            printf("♥");
        }
        for (int i = 0; i < MAXHEALTH - health; i++)
        {
            printf("\x1b[37m♥");
        }
        printf("\n");

        printf("\x1b[34mMana: \n");
        printf("\x1b[32mAttack: \n\n");
    
    return 0;
    
    }
