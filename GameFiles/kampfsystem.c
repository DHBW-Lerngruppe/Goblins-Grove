#include <stdio.h>
#include <string.h>
#include "kampfsystem.h"
#include "gegner.h"
#include "waffe.h"
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int SPIELERLEBEN = 10000;

void kampfsystem(struct Gegner gegnergruppe[], int groesse)
{
    bool spieler_tot = false;
    bool gegnergruppe_tot = false;
    float schadensmultiplikator = 1.0;

    while (spieler_tot == false && gegnergruppe_tot == false)
    {

        // Spieler Angriff

        printf("Spielerleben: %d\n", SPIELERLEBEN);

        // Auswahl Gegner
        printf("Welchen Gegner willst du angreifen?\n");
        for (int gegner_in_liste = 1; gegner_in_liste <= groesse; gegner_in_liste += 1)
        {
            printf("Drücke %d für \033[1;32m%s \033[0mmit ", gegner_in_liste, gegnergruppe[gegner_in_liste - 1].gegner_name);
            printf("\033[1;31m%d Leben \033[0mund ", gegnergruppe[gegner_in_liste - 1].gegner_leben);
            printf("\033[1;34m%d Schaden\033[0m\n", gegnergruppe[gegner_in_liste - 1].gegner_waffenschaden);
        }

        int entscheidung_gegner;
        scanf("%d", &entscheidung_gegner);
        while (entscheidung_gegner > groesse)
        {
            printf("Bitte gueltige Zahl eingeben!\n");
            scanf("%d", &entscheidung_gegner);
        }

        // Auswahl Waffe
        printf("Welche Waffe willst du auswaehlen?\n");
        printf("Drücke 1 für %s mit %dm Reichweite und %d Schaden.\n", waffe1.waffe_name, waffe1.waffe_reichweite, waffe1.waffe_schaden);
        printf("Drücke 2 für %s mit %dm Reichweite und %d Schaden.\n", waffe2.waffe_name, waffe2.waffe_reichweite, waffe2.waffe_schaden);

        int entscheidung_waffe;
        scanf("%d", &entscheidung_waffe);
        while (entscheidung_waffe > 2 || entscheidung_waffe <= 0)
        {
            printf("Bitte gueltige Zahl eingeben!\n");
            scanf("%d", &entscheidung_waffe);
        }
        // Schwert
        if (entscheidung_waffe == 1)
        {
            if (waffe1.waffe_reichweite >= gegnergruppe[entscheidung_gegner - 1].gegner_entfernung)
            {
                gegnergruppe[entscheidung_gegner - 1].gegner_leben -= waffe1.waffe_schaden;
            }
            else
            {
                printf("Da der Gegner zu weit entfernt ist, hast du vorbei geschlagen.");
            }
        }
        // Bogen
        if (entscheidung_waffe == 2)
        {
            if (waffe2.waffe_reichweite >= gegnergruppe[entscheidung_gegner - 1].gegner_entfernung)
            {
                gegnergruppe[entscheidung_gegner - 1].gegner_leben -= waffe2.waffe_schaden;
            }
            else
            {
                printf("Da der Gegner zu weit entfernt ist, hast du vorbei geschlagen.");
            }
        }
        // Gegner Tod
        if (gegnergruppe[entscheidung_gegner - 1].gegner_leben <= 0)
        {
            // Gegner aus Liste entfernen
            struct Gegner neue_gegnergruppe[groesse - 1];
            int neue_index = 0;
            for (int anzahl_gegner_in_liste = 0; anzahl_gegner_in_liste < groesse; anzahl_gegner_in_liste++)
            {
                if (gegnergruppe[anzahl_gegner_in_liste].gegner_name != gegnergruppe[entscheidung_gegner - 1].gegner_name)
                {
                    neue_gegnergruppe[neue_index] = gegnergruppe[anzahl_gegner_in_liste];
                    neue_index++;
                }
            }
            // Update der ursprünglichen Größe der Gegnergruppe
            groesse -= 1;
            // Kopiere die Elemente zurück in das ursprüngliche Array
            for (int i = 0; i < groesse; i++)
            {
                gegnergruppe[i] = neue_gegnergruppe[i];
            }
            if (groesse <= 0)
            {
                gegnergruppe_tot = true;
                printf("Die Gegnergruppe ist tot.");
            }
        }

        // Gegner Angriff
        for (int i = 0; i < groesse; i += 1)
        {
            // starker Kobold, präziser Kobold
            if (strcmp(gegnergruppe[i].gegner_name, gegner1.gegner_name) == 0 || strcmp(gegnergruppe[i].gegner_name, gegner2.gegner_name) == 0)
            {
                SPIELERLEBEN -= gegnergruppe[i].gegner_waffenschaden * schadensmultiplikator;
                printf("%s hat dir %.0f Schaden hinzugefügt.\n", gegnergruppe[i].gegner_name, gegnergruppe[i].gegner_waffenschaden * schadensmultiplikator);
            }

            // Überprüfung auf Spielertod
            if (SPIELERLEBEN <= 0)
            {
                spieler_tot = true;
                printf("Du bist tot!\n");
                break;
            }

            // unterstützender Kobold
            if (strcmp(gegnergruppe[i].gegner_name, gegner3.gegner_name) == 0) // testen
            {
                srand(time(NULL));                // Initialisiert eine zufällige Nummer
                int angriffsauswahl = rand() % 2; // 0 oder 1

                // Heilung
                if (angriffsauswahl == 0)
                {
                    for (int gegner_in_liste = 0; gegner_in_liste < groesse; gegner_in_liste += 1)
                    {
                        gegnergruppe[gegner_in_liste].gegner_leben += gegner3.gegner_heilung;
                    }
                    printf("%s hat alle Gegner um %d Leben geheilt.\n", gegnergruppe[i].gegner_name, gegner3.gegner_heilung);
                }

                // Schaden erhöhen
                else
                {
                    schadensmultiplikator += gegnergruppe[i].gegner_schaden_multiplikator;
                    printf("%s hat den Schaden aller Gegner um den Faktor %.1f erhöht.\n", gegnergruppe[i].gegner_name, schadensmultiplikator);
                }
            }
        }
        printf("\n");
    }
}