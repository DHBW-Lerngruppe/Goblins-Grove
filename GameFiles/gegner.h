// In "gegner.h"
#ifndef GEGNER_H
#define GEGNER_H

struct Gegner
{
    char gegner_name[30];
    int gegner_entfernung;
    int gegner_leben;
    int gegner_waffenschaden;
    int gegner_heilung;
    float gegner_schaden_multiplikator;
};

extern struct Gegner gegner1, gegner2, gegner3;
extern struct Gegner gegnergruppe1[3];

int initializeGegnergruppe1();

#endif
