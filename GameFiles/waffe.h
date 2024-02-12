// In "waffe.h"
#ifndef WAFFE_H
#define WAFFE_H

struct Waffe
{
    char waffe_name[30];
    int waffe_schaden;
    int waffe_reichweite;
};

extern struct Waffe waffe1, waffe2;

#endif