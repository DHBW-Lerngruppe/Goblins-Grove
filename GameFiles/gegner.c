// In "gegner.c"
#include "gegner.h"

struct Gegner gegner1 = {
    "Starker Kobold",
    5,
    175,
    40,
    0,
    0};

struct Gegner gegner2 = {
    "Präziser Kobold",
    15,
    100,
    30,
    0,
    0};

struct Gegner gegner3 =
    {
        "Unterstützender Kobold",
        10,
        75,
        0,
        25,
        0.20};

struct Gegner gegnergruppe1[3];

int initializeGegnergruppe1()
{
    gegnergruppe1[0] = gegner1;
    gegnergruppe1[1] = gegner2;
    gegnergruppe1[2] = gegner3;
    int groesse = sizeof(gegnergruppe1) / sizeof(gegnergruppe1[0]);
    return groesse;
}
