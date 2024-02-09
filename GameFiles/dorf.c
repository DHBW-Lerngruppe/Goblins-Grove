#include <stdio.h>
#include <string.h>
#include "dorf.h"

int hütte1();
int hütte2();
int hütte3();
int hütte4();
int hütte5();

int dorf()
{

    printf("\e[1;1H\e[2J"); // Terminal clearen

    printf("Willkommen im Dorf Finstergrund! \n\n"
           "Du stehst am Rand eines kleinen Dorfes, umgeben von dichten Bäumen. \n"
           "Die schmalen Pfade führen zu einfacheren Hütten, deren Fenster warmes Licht in die Dunkelheit senden. \n"
           "Die Dorfbewohner gehen ihren täglichen Aufgaben nach, doch sie werfen neugierige Blicke auf dich, \n"
           "als du dich in ihrem Dorf zeigst.\n\n");

    int leaveVillage = 0;
    int decision2 = 0;
    while (leaveVillage == 0)
    {
        printf("Was möchtest du tun? \n");
        printf(
            "1 - Geduckte Strohhütte:\n"
            "\tVersteckt im Grünen.\n\n"

            "2 - Lehmige Blockhütte:\n"
            "\tRauchender Schornstein.\n\n"

            "3 - Reetgedeckte Holzhütte:\n"
            "\tWarmes Licht strahlt.\n\n"

            "4 - Felsige Höhlenhütte:\n"
            "\tNatursteinwände,gemütlich.\n\n"

            "5 - Schmiedeeiserne Hütte:\n"
            "\tGlühendes Ambiente,geschäftig.\n"

            "6 - Dorf verlassen\n");

        int decision = 0;
        scanf("%d", &decision);

        switch (decision)
        {
        case 1:
            hütte1();
            break;
        case 2:
            hütte2();
            break;
        case 3:
            hütte3();
            break;
        case 4:
            decision2 = hütte4();
            break;
        case 5:
            hütte5();
            break;
        case 6:
            leaveVillage = 1;
            break;
        default:
            printf("Keine gültige Auswahl");
            break;
        }
    }
    return decision2;
}
int hütte1()
{
    printf("\e[1;1H\e[2J"); // Terminal clearen

    printf("Du betrittst die geduckte Strohhütte, in der warme Sonnenstrahlen durch die Fenster fallen \n"
           "und auf rustikale Möbel treffen.\n");
    return 0;
}
int hütte2()
{
    printf("\e[1;1H\e[2J"); // Terminal clearen

    printf("Beim Betreten der lehmigen Blockhütte empfängt dich der beruhigende Duft von Kräutern, \n"
           "die an den Wänden zum Trocknen hängen.\n");
    return 0;
}
int hütte3()
{
    printf("\e[1;1H\e[2J"); // Terminal clearen

    printf("In der reetgedeckten Holzhütte spürst du die Gemütlichkeit eines knisternden Feuers \n"
           "und hörst leises Murmeln von freundlichen Dorfbewohnern.\n");
    return 0;
}
int hütte4()
{
    printf("\e[1;1H\e[2J"); // Terminal clearen

    printf("Die felsige Höhlenhütte öffnet sich zu einem gemütlichen Raum, \n"
           "in dem sanftes Licht auf handgearbeitete Steinmöbel fällt, die die Höhlenwände schmücken.\n");
    printf("Ein Schlüssel wurde dem Inventar hinzugefügt.\n");

    return 1;
}

int hütte5()
{
    printf("\e[1;1H\e[2J"); // Terminal clearen

    printf("Beim Eintritt in die schmiedeeiserne Hütte begrüßen dich das rhythmische Hämmern \n"
           "und das Glühen der Schmiede, wo der Dorfschmied geschäftig arbeitet.\n");
    return 0;
}