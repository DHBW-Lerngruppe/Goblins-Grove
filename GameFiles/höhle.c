#include <stdio.h>
#include "höhle.h"

int höhle(char** inventory, int size, char* item)
{
    printf("\e[1;1H\e[2J"); // Terminal clearen

    printf("Als du vor der felsigen Höhlenhütte stehst und versuchst, sie zu betreten, spürst du, dass sie verschlossen ist. \n"
           "Ein schwerer Eisengitterriegel verriegelt das Eingangstor und verwehrt dir den Zugang. \n"
           "Die Dunkelheit der Höhle scheint durch das Gitter zu dringen und enthüllt nur vage Konturen im Inneren. \n"
           "Ein Hauch von Geheimnis umgibt die verriegelte Höhle, und du fragst dich, welche Rätsel und Mysterien hinter den steinernen Wänden verborgen liegen. \n");

    printf("\nMöchtest du versuchen die Türe zu öffnen? \n");
    printf("1 - ja\n");
    printf("2 - nein\n");
    int decision;
    scanf("%d", &decision);

    if (decision == 1)
    {
        printf("Yes");
    }
    
    return 0;
}