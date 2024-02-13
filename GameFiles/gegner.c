#include "gegner.h"

struct Gegner gegner1 =
    {
        "Starker Kobold",
        5,      // Entfernung
        60,     // Leben
        10,     // Schaden
        0,      // Heilung
        0};     // Schadensmultiplikation

struct Gegner gegner2 =
    {
        "Präziser Kobold",
        15,
        30,
        15,
        0,
        0};

struct Gegner gegner3 =
    {
        "Unterstützender Kobold",
        10,
        30,
        0,
        5,
        0.20};

struct Gegner gegnergruppe1[3];
struct Gegner gegnergruppe2[4];

// Gegnergruppe 1 erstellen und Gegnerarten hinzufügen
int initializeGegnergruppe1()
{
    gegnergruppe1[0] = gegner1;
    gegnergruppe1[1] = gegner2;
    gegnergruppe1[2] = gegner3;
    int groesse = sizeof(gegnergruppe1) / sizeof(gegnergruppe1[0]);
    return groesse;
}

// Gegnergruppe 2 erstellen und Gegnerarten hinzufügen
int initializeGegnergruppe2()
{
    gegnergruppe2[0] = gegner2;
    gegnergruppe2[1] = gegner3;
    gegnergruppe2[2] = gegner3;
    gegnergruppe2[3] = gegner3;
    int groesse = sizeof(gegnergruppe2) / sizeof(gegnergruppe2[0]);
    return groesse;
}
