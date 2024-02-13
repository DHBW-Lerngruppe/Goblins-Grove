# Programmierprojekt 23F, 1. Semester

## 1. Projektteilnehmer/innen
- Uhlig, Felix
- Greiner, Moritz
- Zobel, Jannik
- Eichwald, Tewes

Kontakt: inf23150@lehre.dhbw-stuttgart.de
&nbsp;
## 2. Projektbeschreibung

### Beschreibung der Aufgabenstellung


Das Ziel ist die Entwicklung eines textbasierten Adventure-Spiels, das den Spieler durch eine Geschichte führt. Das Spielereignis wird über die Konsole dargestellt, der Spieler kann mit verschiedenen Befehlen Entscheidungen treffen, Gegner angreifen oder Gegenstände wie Rüstungsteile ausrüsten. Im Verlauf des Spiels erhöht sich zunehmend die Schwierigkeitsstufe, somit werden die Gegner stärker und die Kämpfe schwieriger.

### Beschreibung von Funktionsumfang und Funktionsweise aus Anwendersicht
- **Interaktive Story:** Der Spieler wird durch eine Geschichte geführt, in der jede Wahl den Spielverlauf beeinflussen kann.
- **Kampfsystem:** Verschiedene Angriffsoptionen wie Schwert und Bogen stehen zur Verfügung. Der Spieler kann strategisch entscheiden, wie er kämpfen möchte.
- **Ressourcen:** Gesundheit (Health) und Energie (Mana) sind wichtige Ressourcen, die im Kampf berücksichtigt werden müssen. Ein simpler Angriff kostet z.B. weniger Mana als ein starker.
- **Rüstung und Upgrades:** Durch das Ausrüsten und Verbessern von Rüstung erhält der Spieler weniger Schaden durch gegnerische Angriffe.
- **Einfache Bedienung:** Die Steuerung des Spiels erfolgt durch Befehle in der Konsole. Die Befehle sind simpel und können über ein Hilfsmenu nachgelesen werden.

### Angestrebte Lösung aus technischer Sicht
- **Programmierung in C:** Das Spiel wird strukturiert in C entwickelt.
- **Datenstruktur und Algorithmus:** Einsatz von den kennengelernten Datenstrukturen zur Verwaltung von Spielzuständen, Inventar und Charaktereigenschaften.
- **Benutzeroberfläche:** Farblich gekennzeichnete Zeilen, um die Übersichtlichkeit in der Konsole zu steigern.
- **Modularer Aufbau:** Das Spiel wird modular aufgebaut, um das nachträgliche Hinzufügen von Spielinhalten zu erleichtern.

&nbsp;

# Entwicklerdokumentation

## 1. Systemanforderungen
- C Compiler (GCC)
- Standardbibliotheken: `<stdio.h>`, `<string.h>`, `<stdlib.h>`, `<sys/time.h>` ,`<stdbool.h>` ,`<unistd.h>`

## 2. Spielkomponenten

### Strukturen
- `struct Gegner`: Definiert Eigenschaften eines Gegners.

  ```c
  struct Gegner
  {
    char gegner_name[30];
    int gegner_entfernung;
    int gegner_leben;
    int gegner_waffenschaden;
    int gegner_heilung;
    float gegner_schaden_multiplikator;
  };
  
- `struct Waffe`: Definiert Eigenschaften der verfügbaren Waffen.

  ```c
  struct Waffe
  {
    char waffe_name[30];
    int waffe_schaden;
    int waffe_reichweite;
    
  };

### Funktionen
- menu():  Auswahl im Menu
- gameover(): Anzeige des Endscreens
- dorf(): Ruft den Ort "Dorf" auf
- hoehle(char): Ruft den Ort "Höhle" auf
- void kampfsystem(struct Gegner[], int): Kampflogik und -mechanismen
- void kampfinfo_anzeigen(struct Gegner[], int): Zeigt Lebenspunkte und Gegnerdetails

### Spiellogik
- Kampfsystem: Rundenbasierter Kampf mit Anzeigen von Spieler- und Gegnerstatus.
- Gegnerverhalten: Unterscheidung zwischen Angriff, Schadensmultiplikation und Heilung basierend auf Gegnertyp.

### Entwicklungshinweise
- Modularität: Datenstrukturen sind modular aufgebaut für einfache Anpassungen.
- Zufälligkeitsinitialisierung: srand() mit Seed aus gettimeofday() für unterschiedliche Zufallswerte

&nbsp;

# Anwenderdokumentation für das Textbasierte Adventure-Spiel

Willkommen zum Goblin Grove! Diese Dokumentation führt Sie durch die Grundlagen der Spielmechanik und wie Sie das Spiel spielen können.

## Spielstart

Zum Starten des Spieles bitte die die Taste F drücken und mit ENTER die Eingabe bestätigen.

## Steuerung

Die Steuerung des Spiels erfolgt über die Eingabe von Zahlen. Die Steuerung bezieht sich auf folgende Grundlagen:

Angriff (Auswahl des Gegners):
- Auswahl durch Eingabe der Nummer und Bestätigung durch ENTER. Es kann nur ein Gegner aus einer Gegnergruppe angegriffen werden, deshalb muss vor jedem Angriff ausgewählt werden, welcher Gegner angegriffen werden soll. Unterschiedliche Gegner besitzen unterschiedliche Entfernungen zum Spieler, weshalb ein Angriff mit dem Schwert nicht immer Schaden verursacht.

Auswahl der Waffe:
- Auswahl durch Eingabe der Nummer und Bestätigung durch ENTER. Die verfügbaren Waffen besitzen unterschiedliche Eigenschaften. Anders als mit dem Schwert,können mit dem Bogen auch Gegner angegriffen werden, die weiter als 5m vom Spieler entfernt sind.

Reisen:
- Dorf: Im Dorf befinden sich mehrere Hütten, in welchen Gegenstände zu finden sind, welche für den weiteren Spielverlauf benötigt werden.
- Höhle: Die Höhle ist das Ziel des Spiels, wer sie betritt, erlangt unvorstellbare Macht.

## Kampfsystem

- Der Kampf beginnen automatisch an vordefinierten Stellen im Spiel. Der Kampf kann nicht wiederholt werden, die Angriffe basieren auf Runden.
- Beim Beginn des Kampfes hat der Spieler den ersten Zug, er wählt aus welchen Gegner aus der Gegnergruppe er mit welcher Waffe angreifen möchte. Dabei werden alle Statistiken angezeigt.

## Gegner

- Gegner im Spiel variieren in ihren Eigenschaften:
  - starker Kobold: Nahkämpfer mit viel Leben
  - präziser Kobold: Fernkämpfer mit hohem Schaden und weniger Leben
  - unterstuetzender Kobold: Heiler ohne eigenen Schaden, dafür aber Erhöhung des Schadens seiner Gruppenmitglieder

## Leben

- Spieler und Gegner haben eine bestimmte Anzahl an Lebenspunkten. Wenn diese auf 0 fallen, gilt der Charakter bzw. der Gegner als besiegt.