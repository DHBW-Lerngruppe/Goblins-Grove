
// Funktion f체r die Entscheidung, mit welcher Waffe ein Gegner angegriffen werden soll


// int entscheidung_waffe(char enemy_name[25])
// {
//     printf("Mit welcher Waffe willst du gegen %s kaempfen?\n", enemy_name);
//     printf("1. Bogen\n2. Schwert\n3. Faust \nGib die Zahl deiner Entscheidung ein\n");

//     int entscheidung_spieler_waffe;
//     scanf("%d", &entscheidung_spieler_waffe); // WICHTIG! Hier die Adresse ?bergeben, nicht den Wert!

//     int waffenschaden;
//     switch (entscheidung_spieler_waffe)
//     {
//     case 1:
//         printf("Du hast den Bogen ausgewaehlt\n");
//         waffenschaden = 25;
//         break;
//     case 2:
//         printf("Du hast das Schwert ausgewaehlt\n");
//         waffenschaden = 50;
//         break;
//     case 3:
//         printf("Du hast deine Faust ausgewaehlt\n");
//         waffenschaden = 10;
//         break;
//     }
//     return entscheidung_spieler_waffe, waffenschaden;
// }

// Switch für die Stats der Gegner, wird pro Gruppe aufgerufen und Gegner werden den Gruppen zugeordnet
/*
int entscheidung_gegnerauswahl(int gegnerauswahl)//!!!
{
char gegner_name[30];
int gegner_entfernung;
int gegner_leben;
int gegner_waffenschaden;
int gegner_heilung;
float gegner_schaden_multiplikator;
*/


#include <stdio.h>
#include <string.h>
#include "kampfsystem.h"
#include "gegner.h"
#include <time.h>
#include <stdlib.h>

int SPIELERLEBEN = 100;

/*
void kampfinfo_anzeigen(struct Gegner gegnergruppe[], int groesse)
{
    printf("Spielerleben: %d\n", SPIELERLEBEN);
    printf("Die Gegnergruppe besteht aus:\n");

    for (int gegner_in_liste = 0; gegner_in_liste < groesse; gegner_in_liste += 1)
    {
        printf("%s: ", gegnergruppe[gegner_in_liste].gegner_name);
        printf("%d hp ", gegnergruppe[gegner_in_liste].gegner_leben);
        printf("%d dmg\n", gegnergruppe[gegner_in_liste].gegner_waffenschaden);
    }
}
*/


// wie Schleife mit gruppe1_besiegt -> in Funktion

void kampfsystem(struct Gegner gegnergruppe[], int groesse)
{
    
    float schadensmultiplikator = 1.0;
    
    // Spieler Angriff

    printf("Spielerleben: %d\n", SPIELERLEBEN);

    // Auswahl Gegner
    
    printf("Welchen Gegner willst du angreifen?\n");
    for (int gegner_in_liste = 1; gegner_in_liste <= groesse; gegner_in_liste += 1)
    {
        printf("Drueke %d für %s mit ",gegner_in_liste, gegnergruppe[gegner_in_liste - 1].gegner_name);
        printf("%d hp und ", gegnergruppe[gegner_in_liste - 1].gegner_leben);
        printf("%d dmg\n", gegnergruppe[gegner_in_liste - 1].gegner_waffenschaden);
    }

    int entscheidung_gegner;
    scanf("%d", &entscheidung_gegner);
    while (entscheidung_gegner > groesse) {
        printf("Bitte gueltige Zahl eingeben!\n");
        scanf("%d", &entscheidung_gegner);
    }


    // 2: Auswahl Waffe

    
    for (int i = 0; i < groesse; i += 1)
    {

        if (strcmp(gegnergruppe[i].gegner_name, gegner1.gegner_name) == 0 || strcmp(gegnergruppe[i].gegner_name, gegner2.gegner_name) == 0)
        {
            // starker Kobold, präziser Kobold
            SPIELERLEBEN -= gegnergruppe[i].gegner_waffenschaden * schadensmultiplikator;
            //printf("Spielerleben: %d", SPIELERLEBEN);
        }
        else
        {   
            // unterstützender Kobold

            srand(time(NULL)); //Initialisiert eine zufällige Nummer
            int angriffsauswahl = rand() % 2; // 0 oder 1
            
            if (angriffsauswahl == 0) {
                for (int gegner_in_liste = 0; gegner_in_liste < groesse; gegner_in_liste += 1) {
                    gegnergruppe[i].gegner_leben += gegner3.gegner_heilung;
                }
                printf("Auswahl Angriff Gegner 3: Heilung\n");
            }
            else {
                schadensmultiplikator += gegnergruppe[i].gegner_schaden_multiplikator;
                printf("Auswahl Angriff Gegner 3: Schadensmultiplikator\n");
            }
        }
    }
}


// Entscheidung Angriff? (starker und schwacher angriff, je nach Mana-Level?)
