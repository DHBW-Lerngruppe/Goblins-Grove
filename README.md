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
## 3. Termine
- Exposé: **29.01.2024** (Punkte 1. und 2. oben)
	- Einladung Benutzer: https://github.com/jfr609/
- Bearbeitung: 02.02. und 09.02.2024
- Abgabe: **14.02.2024** 
	- Beispielformat: https://github.com/AlexanderMelde/Handlungserkennung
- Präsentation: **16.02.2024** (Präsenz)

# Entwicklerdokumentation

## 1. Systemanforderungen
- C Compiler (GCC)
- Standardbibliotheken: `<stdio.h>`, `<string.h>`, `<stdlib.h>`, `<time.h>`

## 2. Spielkomponenten

### 3. Strukturen
- `struct Gegner`: Definiert Eigenschaften eines Gegners.

  ```c
  struct Gegner {
      char gegner_name[30];
      int gegner_leben;
      int gegner_waffenschaden;
      int gegner_heilung;
      float gegner_schaden_multiplikator;
  };

  - `struct Waffe`: Definiert Eigenschaften der Waffen.

  ```c
  struct Waffen {
      	xd;
  	xd;
  	xd;
  };

### 4. Hauptfunktionen
void kampfinfo_anzeigen(struct Gegner[], int): Zeigt Lebenspunkte und Gegnerdetails.
void kampfsystem(struct Gegner[], int): Kampflogik und -mechanismen.

### 5. Spiellogik
Kampfsystem: Rundenbasierter Kampf mit Anzeigen von Spieler- und Gegnerstatus.
Gegnerverhalten: Unterscheidung zwischen Angriff und Heilung basierend auf Gegnertyp.

### 6. Entwicklungshinweise
Modularität: Funktionen sind modular aufgebaut für einfache Anpassungen.
Zufälligkeitsinitialisierung: srand(time(NULL)) zu Beginn für effektive Zufälligkeit.

# Anwenderdokumentation für das Textbasierte Adventure-Spiel

Willkommen zum Goblin Grove! Diese Dokumentation führt Sie durch die Grundlagen der Spielmechanik und wie Sie das Spiel spielen können.

## Spielstart

Das Spiel beginnt mit einer Einführung in die Welt und Ihre Rolle als Spieler. Ihr Ziel ist es, alle Gegner zu besiegen.

## Steuerung

Die Steuerung des Spiels erfolgt über Texteingaben. Folgende Befehle stehen Ihnen zur Verfügung:

Angriff:
- Lorem ipsum dolor sit amet, consetetur sadipscing elitr,  sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr,  sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.

Auswahl der Waffe:
- Lorem ipsum dolor sit amet, consetetur sadipscing elitr,  sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr,  sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.

Gegnergruppierungen:
- Lorem ipsum dolor sit amet, consetetur sadipscing elitr,  sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr,  sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.

## Kampfsystem

- Jeder Kampf wird rundenbasiert ausgeführt. In jeder Runde können Sie entscheiden, ob Sie angreifen, heilen oder eine spezielle Aktion durchführen möchten.
- Gegner haben verschiedene Stärken und Schwächen, die Sie herausfinden und zu Ihrem Vorteil nutzen müssen.

## Gegner

- Gegner im Spiel variieren in ihren Fähigkeiten und Angriffsmustern. Einige können sich heilen, während andere stärkere Angriffe ausführen können.

## Heilung und Schaden

- Ihr Charakter und Gegner haben eine bestimmte Anzahl an Lebenspunkten. Wenn diese auf 0 fallen, gilt der Charakter bzw. der Gegner als besiegt.
- Heilung und Schaden werden durch die Spielmechanik und bestimmte Aktionen im Spiel beeinflusst.


