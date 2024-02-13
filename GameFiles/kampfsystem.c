#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "kampfsystem.h"
#include "gegner.h"
#include "waffe.h"
#include <sys/time.h>
#include <stdbool.h>

int SPIELERLEBEN = 200; // 1 Gegner = 50 Spielerleben

int kampfsystem(struct Gegner gegnergruppe[], int groesse)
{
    int status = 0;
    bool spieler_tot = false;
    bool gegnergruppe_tot = false;
    float schadensmultiplikator = 1.0;

    while (spieler_tot == false && gegnergruppe_tot == false)
    {
        printf("\033[0;31m"); // Rot

        printf("▄ •▄  ▄▄▄· • ▌ ▄ ·.  ▄▄▄··▄▄▄\n");
        printf("█▌▄▌▪▐█ ▀█ ·██ ▐███▪▐█ ▄█▐▄▄·\n");
        printf("▐▀▀▄·▄█▀▀█ ▐█ ▌▐▌▐█· ██▀·██▪\n");
        printf("▐█.█▌▐█ ▪▐▌██ ██▌▐█▌▐█▪·•██▌.\n");
        printf("·▀  ▀ ▀  ▀ ▀▀  █▪▀▀▀.▀   ▀▀▀\n\n\n");

        printf("\033[0m"); // Standardfarben


    // **Spieler Angriff**

        printf("Spielerleben: \033[1;31m%d\n\n\033[0m", SPIELERLEBEN);

        // Auswahl Gegner
        printf("Welchen Gegner willst du angreifen?\n");

        for (int gegner_in_liste = 1; gegner_in_liste <= groesse; gegner_in_liste += 1)
        {
            printf("Drücke %d für \033[1;32m%s \033[0mmit ", gegner_in_liste, gegnergruppe[gegner_in_liste - 1].gegner_name);
            printf("\033[1;31m%d Leben \033[0mund ", gegnergruppe[gegner_in_liste - 1].gegner_leben);
            printf("\033[1;34m%d Schaden\033[0m", gegnergruppe[gegner_in_liste - 1].gegner_waffenschaden);
            printf(", der \033[1;33m%dm\033[0m entfernt ist.\n", gegnergruppe[gegner_in_liste - 1].gegner_entfernung);
        }

        int entscheidung_gegner;
        scanf("%d", &entscheidung_gegner);

        while (entscheidung_gegner > groesse)
        {
            printf("Bitte gültige Zahl eingeben!\n");
            scanf("%d", &entscheidung_gegner);
        }

        printf("\n");

        // Auswahl Waffe
        printf("Welche Waffe willst du auswählen?\n");
        printf("Drücke 1 für \033[1;32m%s\033[0m mit \033[1;33m%dm\033[0m Reichweite und \033[1;34m%d Schaden\033[0m.\n", waffe1.waffe_name, waffe1.waffe_reichweite, waffe1.waffe_schaden);
        printf("Drücke 2 für \033[1;32m%s\033[0m mit \033[1;33m%dm\033[0m Reichweite und \033[1;34m%d Schaden\033[0m.\n", waffe2.waffe_name, waffe2.waffe_reichweite, waffe2.waffe_schaden);

        int entscheidung_waffe;
        scanf("%d", &entscheidung_waffe);

        while (entscheidung_waffe > 2 || entscheidung_waffe <= 0)
        {
            printf("Bitte gültige Zahl eingeben!\n");
            scanf("%d", &entscheidung_waffe);
        }

        // Schwert
        if (entscheidung_waffe == 1)
        {
            if (waffe1.waffe_reichweite >= gegnergruppe[entscheidung_gegner - 1].gegner_entfernung)
            {
                gegnergruppe[entscheidung_gegner - 1].gegner_leben -= waffe1.waffe_schaden;
                printf("\nDu hast \033[1;32m%s\033[0m \033[1;34m%d Schaden\033[0m hinzugefügt.\n", gegnergruppe[entscheidung_gegner - 1].gegner_name, waffe1.waffe_schaden);
            }
            else
            {
                printf("\n\033[1;33mDa der Gegner zu weit entfernt ist, hast du vorbei geschlagen.\n\033[0m");
            }
        }

        // Bogen
        if (entscheidung_waffe == 2)
        {
            if (waffe2.waffe_reichweite >= gegnergruppe[entscheidung_gegner - 1].gegner_entfernung)
            {
                gegnergruppe[entscheidung_gegner - 1].gegner_leben -= waffe2.waffe_schaden;
                printf("\nDu hast \033[1;32m%s\033[0m \033[1;34m%d Schaden\033[0m hinzugefügt.\n", gegnergruppe[entscheidung_gegner - 1].gegner_name, waffe2.waffe_schaden);
            }
            else
            {
                printf("\n\033[1;33mDa der Gegner zu weit entfernt ist, hast du vorbei geschossen.\n\033[0m");
            }
        }

        // Gegner Tod
        if (gegnergruppe[entscheidung_gegner - 1].gegner_leben <= 0)
        {
            printf("Du hast \033[1;32m%s\033[0m \033[1;31mgetötet\033[0m.\n", gegnergruppe[entscheidung_gegner - 1].gegner_name);
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
                printf("\n\033[1;31mAlle Gegner sind tot!\033[0m\n");
                status = 1;
            }
        }

        printf("\n");

        // Gegner Angriff
        for (int i = 0; i < groesse; i += 1)
        {
            // starker Kobold, präziser Kobold
            if (strcmp(gegnergruppe[i].gegner_name, gegner1.gegner_name) == 0 || strcmp(gegnergruppe[i].gegner_name, gegner2.gegner_name) == 0)
            {
                SPIELERLEBEN -= gegnergruppe[i].gegner_waffenschaden * schadensmultiplikator;
                printf("\033[1;32m%s\033[0m hat dir \033[1;34m%.0f Schaden\033[0m hinzugefügt.\n", gegnergruppe[i].gegner_name, gegnergruppe[i].gegner_waffenschaden * schadensmultiplikator);
            }

            // Überprüfung auf Spielertod
            if (SPIELERLEBEN <= 0)
            {
                spieler_tot = true;
                printf("\n\033[1;31mDu bist tot!\033[0m\n");
                status = 2;
                break;
            }

            // unterstützender Kobold
            if (strcmp(gegnergruppe[i].gegner_name, gegner3.gegner_name) == 0)
            {

                struct timeval time;
                gettimeofday(&time, NULL);

                // Mikrosekunden als Seed verwenden
                srand((time.tv_sec * 1000) + (time.tv_usec / 1000));

                // Eine Zufallszahl generieren
                int zufallszahl = rand();

                int angriffsauswahl = zufallszahl % 2;

                // Heilung
                if (angriffsauswahl == 0)
                {
                    for (int gegner_in_liste = 0; gegner_in_liste < groesse; gegner_in_liste += 1)
                    {
                        gegnergruppe[gegner_in_liste].gegner_leben += gegner3.gegner_heilung;
                    }
                    printf("\033[1;32m%s\033[0m hat alle Gegner um \033[1;31m%d Leben\033[0m geheilt.\n", gegnergruppe[i].gegner_name, gegner3.gegner_heilung);
                }

                // Schaden erhöhen
                else
                {
                    schadensmultiplikator += gegnergruppe[i].gegner_schaden_multiplikator;
                    printf("\033[1;32m%s\033[0m hat den Schaden aller Gegner um den Faktor \033[1;34m%.1f Schaden\033[0m erhöht.\n", gegnergruppe[i].gegner_name, schadensmultiplikator);
                }
            }
        }
        printf("\n");
        printf("─────────────────────────────────────────────\n");

        char leertaste;
        printf("Drücke Leertaste und dann Enter zum weitermachen\n");

        while ((leertaste = getchar()) != ' ')
        {
          // Warte auf Eingabe! (keine unnötige While-Schleife ^^)
        }
        printf("\e[1;1H\e[2J"); // Terminal clearen
    }
    return status;
}