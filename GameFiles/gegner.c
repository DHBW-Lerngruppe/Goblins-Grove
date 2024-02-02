// In "gegner.c"
#include "gegner.h"

struct Gegner gegner1 = {
    "starker Kobold",
    5,
    175,
    40,
    0,
    0};

struct Gegner gegner2 = {
    "praeziser Kobold",
    15,
    100,
    30,
    0,
    0};

struct Gegner gegner3 =
    {
        "unterstützender Kobold",
        10,
        75,
        0,
        25,
        1.20};

struct Gegner gegnergruppe1[2];

int initializeGegnergruppe1()
{
    gegnergruppe1[0] = gegner1;
    gegnergruppe1[1] = gegner2;
    int groesse = sizeof(gegnergruppe1) / sizeof(gegnergruppe1[0]);
    return groesse;
}
