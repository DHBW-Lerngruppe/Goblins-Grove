#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "hoehle.h"
#include "gameScreens.h"
#include "gegner.h"
#include "kampfsystem.h"

#define TIME 20000

int hoehle(char inv[][50])
{

    printf("\e[1;1H\e[2J"); // Terminal clearen

    printf("\033[1;95m");   // Magenta

    printf("┓┏••┓ ┓  \n");
    printf("┣┫┏┓┣┓┃┏┓\n");
    printf("┛┗┗┛┛┗┗┗\n");

    printf("\033[0m"); //Standardfarbe

    char text[] = "Als du vor der felsigen Höhle stehst und versuchst, sie zu betreten, merkst du, dass sie verschlossen ist. \n"
                  "Ein schwerer Eisengitterriegel verriegelt das Eingangstor und verwehrt dir den Zugang. \n"
                  "Die Dunkelheit der Höhle scheint durch das Gitter zu dringen und enthüllt nur vage Konturen im Inneren. \n"
                  "Ein Hauch von Geheimnis umgibt die verriegelte Höhle, und du fragst dich, welche Rätsel und Mysterien hinter den steinernen Wänden verborgen liegen. \n";

    for (int i = 0; i < strlen(text); i++)
    {
        putchar(text[i]);
        fflush(stdout); // Ausgangspuffer wird geleert
        usleep(TIME);   // Verzögerung beim Tippen (100ms)
    }

    printf("\nMöchtest du versuchen die Türe zu öffnen? \n");
    printf("1 - ja\n");
    printf("2 - nein\n");

    int decision;
    int returnValue = 0;
    int kampfStatus = 0;
    
    scanf("%d", &decision);

    // IF-Schleife ob Schlüssel bereits gefunden wurde oder nicht
    if (decision == 1)
    {
        int foundKey = 0;
        for (int i = 0; i < 10; i++)
        {
            if (strcmp(inv[i], "Schlüssel") == 0)
            {
                foundKey = 1;
                break; // Stoppe die Schleife, sobald der Schlüssel gefunden wurde
            }
        }

        if (foundKey)
        {
            printf("Du öffnest die Türe\n");
            kampfStatus = kampfsystem(gegnergruppe2, initializeGegnergruppe2());
            
            if (kampfStatus == 1)
            {
                endScreen();
            }
            else if (kampfStatus == 2)
            {
                gameover();
            }
            returnValue = 1;
        }
        else
        {
            printf("Du hast keinen geeigneten Schlüssel! \n");
        }
    }
    else
    {
        printf("Du verlässt die Höhle\n");
    }
    return returnValue;
}
