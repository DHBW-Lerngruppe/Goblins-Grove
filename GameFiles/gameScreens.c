#include <stdio.h>
#include <unistd.h>
#include "gameScreens.h"

#define TIME 200000

int menu()
{

printf("\x1b[32m    ▄██████▄   ▄██████▄  ▀█████████▄   ▄█        ▄█  ███▄▄▄▄      ▄████████\x1b[0m      \x1b[31m   ▄██████▄     ▄████████  ▄██████▄   ▄█    █▄     ▄████████   \x1b[0m\n");
usleep(TIME);
printf("\x1b[32m   ███    ███ ███    ███   ███    ███ ███       ███  ███▀▀▀██▄   ███    ███\x1b[0m      \x1b[31m  ███    ███   ███    ███ ███    ███ ███    ███   ███    ███   \x1b[0m\n");
usleep(TIME);
printf("\x1b[32m   ███    █▀  ███    ███   ███    ███ ███       ███▌ ███   ███   ███    █▀ \x1b[0m      \x1b[31m  ███    █▀    ███    ███ ███    ███ ███    ███   ███    █▀    \x1b[0m\n");
usleep(TIME);
printf("\x1b[32m  ▄███        ███    ███  ▄███▄▄▄██▀  ███       ███▌ ███   ███   ███       \x1b[0m      \x1b[31m ▄███         ▄███▄▄▄▄██▀ ███    ███ ███    ███  ▄███▄▄▄       \x1b[0m\n");
usleep(TIME);
printf("\x1b[32m ▀▀███ ████▄  ███    ███ ▀▀███▀▀▀██▄  ███       ███▌ ███   ███ ▀███████████\x1b[0m      \x1b[31m▀▀███ ████▄  ▀▀███▀▀▀▀▀   ███    ███ ███    ███ ▀▀███▀▀▀       \x1b[0m\n");
usleep(TIME);
printf("\x1b[32m   ███    ███ ███    ███   ███    ██▄ ███       ███  ███   ███          ███\x1b[0m      \x1b[31m  ███    ███ ▀███████████ ███    ███ ███    ███   ███    █▄    \x1b[0m\n");
usleep(TIME);
printf("\x1b[32m   ███    ███ ███    ███   ███    ███ ███▌    ▄ ███  ███   ███    ▄█    ███\x1b[0m      \x1b[31m  ███    ███   ███    ███ ███    ███ ███    ███   ███    ███   \x1b[0m\n");
usleep(TIME);
printf("\x1b[32m   ████████▀   ▀██████▀  ▄█████████▀  █████▄▄██ █▀    ▀█   █▀   ▄████████▀ \x1b[0m      \x1b[31m  ████████▀    ███    ███  ▀██████▀   ▀██████▀    ██████████   \x1b[0m\n");
usleep(TIME);
printf("\x1b[32m                                      ▀                                    \x1b[0m      \x1b[31m               ███    ███                                      \x1b[0m\n");

printf("\n");

printf("                                                         • ▌ ▄ ·.  ▄▄▄· ·▄▄▄▄  ▄▄▄ .    ▄▄▄▄·  ▄· ▄▌ \n");
usleep(TIME);
printf("                                                          ·██ ▐███▪▐█ ▀█ ██▪ ██ ▀▄.▀·    ▐█ ▀█▪▐█▪██▌ \n");
usleep(TIME);
printf("                                                          ▐█ ▌▐▌▐█·▄█▀▀█ ▐█· ▐█▌▐▀▀▪▄    ▐█▀▀█▄▐█▌▐█▪ \n");
usleep(TIME);
printf("                                                          ██ ██▌▐█▌▐█ ▪▐▌██. ██ ▐█▄▄▌    ██▄▪▐█ ▐█▀·. \n");
usleep(TIME);
printf("                                                          ▀▀  █▪▀▀▀ ▀  ▀ ▀▀▀▀▀•  ▀▀▀     ·▀▀▀▀   ▀ •  \n");
usleep(TIME);
printf("\n");


printf("                                                                Felix, Jannik, Moritz & Tewes\n");
usleep(TIME);
printf("\n");
printf("\n");
printf("\n");

usleep(TIME);
printf("\x1b[36m                                                              ┏┓        ╹╹┏┓╹╹       ┏┓           \x1b[0m\n");
printf("\x1b[36m                                                              ┃┃┏┓┏┓┏┏    ┣     ╋┏┓  ┗┓╋┏┓┏┓╋     \x1b[0m\n");
printf("\x1b[36m                                                              ┣┛┛ ┗ ┛┛    ┻     ┗┗┛  ┗┛┗┗┻┛ ┗     \x1b[0m\n");
                               
return 0;
}

int gameover()
{

printf("\033[0;31m                                        ▄████  ▄▄▄       ███▄ ▄███▓▓█████     ▒█████   ██▒   █▓▓█████  ██▀███     \x1b[0m\n");
usleep(TIME);
printf("\033[0;31m                                        ██▒ ▀█▒▒████▄    ▓██▒▀█▀ ██▒▓█   ▀    ▒██▒  ██▒▓██░   █▒▓█   ▀ ▓██ ▒ ██▒   \x1b[0m\n");
usleep(TIME);
printf("\033[0;31m                                       ▒██░▄▄▄░▒██  ▀█▄  ▓██    ▓██░▒███      ▒██░  ██▒ ▓██  █▒░▒███   ▓██ ░▄█ ▒   \x1b[0m\n");
usleep(TIME);
printf("\033[0;31m                                       ░▓█  ██▓░██▄▄▄▄██ ▒██    ▒██ ▒▓█  ▄    ▒██   ██░  ▒██ █░░▒▓█  ▄ ▒██▀▀█▄     \x1b[0m\n");
usleep(TIME);
printf("\033[0;31m                                       ░▒▓███▀▒ ▓█   ▓██▒▒██▒   ░██▒░▒████▒   ░ ████▓▒░   ▒▀█░  ░▒████▒░██▓ ▒██▒   \x1b[0m\n");
usleep(TIME);
printf("\033[0;31m                                        ░▒   ▒  ▒▒   ▓▒█░░ ▒░   ░  ░░░ ▒░ ░   ░ ▒░▒░▒░    ░ ▐░  ░░ ▒░ ░░ ▒▓ ░▒▓░   \x1b[0m\n");
usleep(TIME);
printf("\033[0;31m                                         ░   ░   ▒   ▒▒ ░░  ░      ░ ░ ░  ░     ░ ▒ ▒░    ░ ░░   ░ ░  ░  ░▒ ░ ▒░   \x1b[0m\n");
usleep(TIME);
printf("\033[0;31m                                       ░ ░   ░   ░   ▒   ░      ░      ░      ░ ░ ░ ▒       ░░     ░     ░░   ░    \x1b[0m\n");
usleep(TIME);
printf("\033[0;31m                                             ░       ░  ░       ░      ░  ░       ░ ░        ░     ░  ░   ░        \x1b[0m\n");
usleep(TIME);
printf("\033[0;31m                                                            ░                      \x1b[0m\n");

return 0;
}

int endScreen()
{

printf("\x1b[32m                                                ██    ██  ██████  ██    ██     ██     ██  ██████  ███    ██     \x1b[0m\n");  
usleep(TIME);
printf("\x1b[32m                                                 ██  ██  ██    ██ ██    ██     ██     ██ ██    ██ ████   ██     \x1b[0m\n");  
usleep(TIME);
printf("\x1b[32m                                                  ████   ██    ██ ██    ██     ██  █  ██ ██    ██ ██ ██  ██     \x1b[0m\n");  
usleep(TIME);
printf("\x1b[32m                                                   ██    ██    ██ ██    ██     ██ ███ ██ ██    ██ ██  ██ ██     \x1b[0m\n");  
usleep(TIME);
printf("\x1b[32m                                                   ██     ██████   ██████       ███ ███   ██████  ██   ████     \x1b[0m\n");  

printf("\n");                                                            
                                                            
usleep(TIME);
usleep(TIME);
printf("\x1b[36m                                                              ┳┓    ┓     ┏••        •  ┓         \x1b[0m\n");
printf("\x1b[36m                                                              ┃┃┏┓┏┓┃┏┏┓  ╋┓┏┏┓┏  ┏┏┓┓┏┓┃┏┓┏┓     \x1b[0m\n");
printf("\x1b[36m                                                              ┻┛┗┻┛┗┛┗┗   ┛┗┻┛ ┛  ┛┣┛┗┗ ┗┗ ┛┗     \x1b[0m\n");
printf("\x1b[36m                                                                                   ┛              \x1b[0m\n");
                                                                                                                         

return 0;
}