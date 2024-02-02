
// Funktion f?r die Entscheidung ob ein Kampf angetreten werden soll, oder nicht
/*int entscheidung_kampf(char enemy_name[25]) {
    printf("Willst du mit %s kaempfen?\n", enemy_name);
    printf("Fuer JA die 1, fuer NEIN die 0\n"); //1 und 0 weil ich keine Ahnung hab wie man die Strings vergleicht

    int entscheidung_spieler_kampf;
    scanf("%d", &entscheidung_spieler_kampf); //Eingabe ?ber Console

    if (entscheidung_spieler_kampf == 1)
    {
        printf("Du hast dich dafuer entschieden mit %s zu kaempfen!\n\n", enemy_name);
    }
    else
    {
        printf("Du hast dich dafuer entschieden, lieber nicht mit %s zu kaempfen!\n\n", enemy_name);
    }
    return entscheidung_spieler_kampf;
}
*/
// Funktion f체r die Entscheidung, mit welcher Waffe ein Gegner angegriffen werden soll

// void spieler() //!!!
// {
// 	int leben = 100;
// }

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

// Switch f체r die Stats der Gegner, wird pro Gruppe aufgerufen und Gegner werden den Gruppen zugeordnet
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

int SPIELERLEBEN = 100;


// Gegner zu Gruppenzuordnung -> direkt Kampf der Liste?
// struct gegnergruppe;

void kampfsystem(struct Gegner gegnergruppe[], int groesse)
{
    // erst Spieler angreifen lassen
    for (int i = 0; i < groesse; i += 1)
    {

        if (strcmp(gegnergruppe[i].gegner_name, gegner1.gegner_name) == 0 || 
            strcmp(gegnergruppe[i].gegner_name, gegner2.gegner_name) == 0)
        {
            SPIELERLEBEN -= gegnergruppe[i].gegner_waffenschaden;
            printf("Spielerleben: %d", SPIELERLEBEN);
        }
        else
        {
            // unterstützender Kobold
            for (int gegner_in_liste = 0; gegner_in_liste < groesse; gegner_in_liste += 1)
            {
                gegnergruppe[i].gegner_leben += gegner3.gegner_heilung;
            }
        }
    }
}

int Gegnerangriffe(int gegnerauswahl)
{
    return 0;
}

// Entscheidung Angriff? (starker und schwacher angriff, je nach Mana-Level?)

// Kampf an sich
// int kampfsystem()
// {
//     // char enemy_name[25] = "Kobold";
//     // int enemy_health = 100;
//     //   int kampf_entscheidung = entscheidung_kampf(enemy_name);
    
//     printf("Spielerleben: %d", SPIELERLEBEN);
//     kampfablauf(gegnergruppe1, );

//     return 0;
// }