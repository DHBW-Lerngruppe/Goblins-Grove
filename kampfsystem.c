#include <stdio.h>


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
/*
void spieler() //!!!
{
	int leben = 100;
}


int entscheidung_waffe(char enemy_name[25]) {
    printf("Mit welcher Waffe willst du gegen %s kaempfen?\n", enemy_name);
    printf("1. Bogen\n2. Schwert\n3. Faust \nGib die Zahl deiner Entscheidung ein\n");
    
    int entscheidung_spieler_waffe;
    scanf("%d", &entscheidung_spieler_waffe); // WICHTIG! Hier die Adresse ?bergeben, nicht den Wert!
    
    
    int waffenschaden;
    switch(entscheidung_spieler_waffe)
    {
        case 1:
            printf("Du hast den Bogen ausgewaehlt\n");
            waffenschaden = 25;
            break;
        case 2:
            printf("Du hast das Schwert ausgewaehlt\n");
            waffenschaden = 50;
            break;
        case 3:
            printf("Du hast deine Faust ausgewaehlt\n");
            waffenschaden = 10;
            break;      
    }
    return entscheidung_spieler_waffe, waffenschaden;
}

//Switch f체r die Stats der Gegner, wird pro Gruppe aufgerufen und Gegner werden den Gruppen zugeordnet
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
	/*
struct Gegner {
    
        char gegner_name[30];
        int gegner_entfernung;
        int gegner_leben;
        int gegner_waffenschaden;
        int gegner_heilung;
        float gegner_schaden_multiplikator;
    };
    
struct Gegner gegner1, gegner2, gegner3; // 3 Gegner

struct Gegner gegner1 = {
    "starker Kobold",
        5,
        175,
        40,
        0,
        0//,
    };
    
struct Gegner gegner2 = {
    "praeziser Kobold",
        15,
        100,
        30,
        0,
        0//,
    };

struct Gegner gegner3 = {
    "unterstuetzender Kobold",
        10,
        75,
        0,
        25,
        1.20//,
    };	

	
	
//Gegner zu Gruppenzuordnung -> direkt Kampf der Liste?
//struct gegnergruppe;

void kampfablauf(struct gegnergruppe[]) {
    //erst Spieler angreifen lassen
    for (int gegnernummer = 0; gegnernummer < sizeof(gegnergruppe); gegnernummer += 1) {

        if(gegnergruppe[gegnernummer].gegner_name == "starker Kobold" || gegnergruppe[gegnernummer].gegner_name == "praeziser Kobold") {
		    spieler().leben -= gegnergruppe[gegnernummer].gegner_waffenschaden;
	    }
	else {
		//unterstützender Kobold
        for (int gegner_in_liste = 0; gegner_in_liste < sizeof(gegnergruppe); gegner_in_liste += 1) {
		    gegnergruppe[gegnernummer].gegner_leben += gegner3.gegner_heilung;
	    }
    }
    }
}

int Gegnerangriffe(int gegnerauswahl)
{
	return 0;
}



// Entscheidung Angriff? (starker und schwacher angriff, je nach Mana-Level?)

//Kampf an sich
int main() {
    //char enemy_name[25] = "Kobold";
    //int enemy_health = 100;
    //  int kampf_entscheidung = entscheidung_kampf(enemy_name);
    
    

   struct gegnergruppe1[] = {gegner1, gegner2};

   kampfablauf(gegnergruppe1);






    return 0;
}
*/

#include <string.h>

// Annahme: Definition der Strukturen für Gegner und Spieler
typedef struct {
    char gegner_name[50]; // Verwendung von char-Arrays für Strings
    int gegner_waffenschaden;
    int gegner_leben;
    int gegner_heilung; // Hinzugefügt, da es im Originalcode erwähnt wurde
} Gegner;

typedef struct {
    int leben;
    // Weitere Attribute des Spielers können hier hinzugefügt werden
} Spieler;

// Globale Spieler-Variable, um das Beispiel einfach zu halten
Spieler spieler = {100}; // Annahme: Spieler startet mit 100 Leben

// Funktion, um den Kampfablauf zu handhaben
void kampfablauf(Gegner gegnergruppe[], int anzahlGegner) {
    for (int gegnernummer = 0; gegnernummer < anzahlGegner; gegnernummer++) {
        if (strcmp(gegnergruppe[gegnernummer].gegner_name, "starker Kobold") == 0 || 
            strcmp(gegnergruppe[gegnernummer].gegner_name, "praeziser Kobold") == 0) {
            spieler.leben -= gegnergruppe[gegnernummer].gegner_waffenschaden;
        } else {
            // Unterstützender Kobold
            for (int gegner_in_liste = 0; gegner_in_liste < anzahlGegner; gegner_in_liste++) {
                gegnergruppe[gegner_in_liste].gegner_leben += gegnergruppe[gegnernummer].gegner_heilung;
            }
        }
    }
}

// Annahme: Hauptfunktion, die zeigt, wie die Strukturen und Funktionen verwendet werden könnten
int main() {
    Gegner gegnergruppe[] = {
        {"starker Kobold", 10, 50, 0},  // Beispielgegner 1
        {"unterstützender Kobold", 0, 30, 5}  // Beispielgegner 2
    };
    int anzahlGegner = sizeof(gegnergruppe) / sizeof(gegnergruppe[0]);

    printf("Der Spieler beginnt mit %d Leben.\n", spieler.leben);
    kampfablauf(gegnergruppe, anzahlGegner);
    printf("Nach dem Kampf hat der Spieler %d Leben.\n", spieler.leben);

    return 0;


}#include <string.h>

// Annahme: Definition der Strukturen für Gegner und Spieler
typedef struct {
    char gegner_name[50]; // Verwendung von char-Arrays für Strings
    int gegner_waffenschaden;
    int gegner_leben;
    int gegner_heilung; // Hinzugefügt, da es im Originalcode erwähnt wurde
} Gegner;

typedef struct {
    int leben;
    // Weitere Attribute des Spielers können hier hinzugefügt werden
} Spieler;

// Globale Spieler-Variable, um das Beispiel einfach zu halten
Spieler spieler = {100}; // Annahme: Spieler startet mit 100 Leben

// Funktion, um den Kampfablauf zu handhaben
void kampfablauf(Gegner gegnergruppe[], int anzahlGegner) {
    for (int gegnernummer = 0; gegnernummer < anzahlGegner; gegnernummer++) {
        if (strcmp(gegnergruppe[gegnernummer].gegner_name, "starker Kobold") == 0 || 
            strcmp(gegnergruppe[gegnernummer].gegner_name, "praeziser Kobold") == 0) {
            spieler.leben -= gegnergruppe[gegnernummer].gegner_waffenschaden;
        } else {
            // Unterstützender Kobold
            for (int gegner_in_liste = 0; gegner_in_liste < anzahlGegner; gegner_in_liste++) {
                gegnergruppe[gegner_in_liste].gegner_leben += gegnergruppe[gegnernummer].gegner_heilung;
            }
        }
    }
}

// Annahme: Hauptfunktion, die zeigt, wie die Strukturen und Funktionen verwendet werden könnten
int main() {
    Gegner gegnergruppe[] = {
        {"starker Kobold", 10, 50, 0},  // Beispielgegner 1
        {"unterstützender Kobold", 0, 30, 5}  // Beispielgegner 2
    };
    int anzahlGegner = sizeof(gegnergruppe) / sizeof(gegnergruppe[0]);

    printf("Der Spieler beginnt mit %d Leben.\n", spieler.leben);
    kampfablauf(gegnergruppe, anzahlGegner);
    printf("Nach dem Kampf hat der Spieler %d Leben.\n", spieler.leben);

    return 0;
}