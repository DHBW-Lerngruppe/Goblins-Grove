# Entwicklerdokumentation

## Systemanforderungen
- C Compiler (z.B. GCC)
- Standardbibliotheken: `<stdio.h>`, `<string.h>`, `<stdlib.h>`, `<time.h>`

## Spielkomponenten

### Strukturen
- `struct Gegner`: Definiert Eigenschaften eines Gegners.

  ```c
  struct Gegner {
      char gegner_name[30];
      int gegner_leben;
      int gegner_waffenschaden;
      int gegner_heilung;
      float gegner_schaden_multiplikator;
  };

### Hauptfunktionen
void kampfinfo_anzeigen(struct Gegner[], int): Zeigt Lebenspunkte und Gegnerdetails.
void kampfsystem(struct Gegner[], int): Kampflogik und -mechanismen.

### Spiellogik
Kampfsystem: Rundenbasierter Kampf mit Anzeigen von Spieler- und Gegnerstatus.
Gegnerverhalten: Unterscheidung zwischen Angriff und Heilung basierend auf Gegnertyp.

### Entwicklungshinweise
Modularität: Funktionen sind modular aufgebaut für einfache Anpassungen.
Zufälligkeitsinitialisierung: srand(time(NULL)) zu Beginn für effektive Zufälligkeit.
