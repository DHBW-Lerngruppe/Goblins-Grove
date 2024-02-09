#include <stdio.h>
#include <unistd.h>
#include "menu.h"

int time = 0;

int menu()
{

printf("\x1b[32m    ▄██████▄   ▄██████▄  ▀█████████▄   ▄█        ▄█  ███▄▄▄▄      ▄████████\x1b[0m      \x1b[31m   ▄██████▄     ▄████████  ▄██████▄   ▄█    █▄     ▄████████   \x1b[0m\n");
usleep(time);
printf("\x1b[32m   ███    ███ ███    ███   ███    ███ ███       ███  ███▀▀▀██▄   ███    ███\x1b[0m      \x1b[31m  ███    ███   ███    ███ ███    ███ ███    ███   ███    ███   \x1b[0m\n");
usleep(time);
printf("\x1b[32m   ███    █▀  ███    ███   ███    ███ ███       ███▌ ███   ███   ███    █▀ \x1b[0m      \x1b[31m  ███    █▀    ███    ███ ███    ███ ███    ███   ███    █▀    \x1b[0m\n");
usleep(time);
printf("\x1b[32m  ▄███        ███    ███  ▄███▄▄▄██▀  ███       ███▌ ███   ███   ███       \x1b[0m      \x1b[31m ▄███         ▄███▄▄▄▄██▀ ███    ███ ███    ███  ▄███▄▄▄       \x1b[0m\n");
usleep(time);
printf("\x1b[32m ▀▀███ ████▄  ███    ███ ▀▀███▀▀▀██▄  ███       ███▌ ███   ███ ▀███████████\x1b[0m      \x1b[31m▀▀███ ████▄  ▀▀███▀▀▀▀▀   ███    ███ ███    ███ ▀▀███▀▀▀       \x1b[0m\n");
usleep(time);
printf("\x1b[32m   ███    ███ ███    ███   ███    ██▄ ███       ███  ███   ███          ███\x1b[0m      \x1b[31m  ███    ███ ▀███████████ ███    ███ ███    ███   ███    █▄    \x1b[0m\n");
usleep(time);
printf("\x1b[32m   ███    ███ ███    ███   ███    ███ ███▌    ▄ ███  ███   ███    ▄█    ███\x1b[0m      \x1b[31m  ███    ███   ███    ███ ███    ███ ███    ███   ███    ███   \x1b[0m\n");
usleep(time);
printf("\x1b[32m   ████████▀   ▀██████▀  ▄█████████▀  █████▄▄██ █▀    ▀█   █▀   ▄████████▀ \x1b[0m      \x1b[31m  ████████▀    ███    ███  ▀██████▀   ▀██████▀    ██████████   \x1b[0m\n");
usleep(time);
printf("\x1b[32m                                      ▀                                    \x1b[0m      \x1b[31m               ███    ███                                      \x1b[0m\n");

printf("\n");

printf("                                                         • ▌ ▄ ·.  ▄▄▄· ·▄▄▄▄  ▄▄▄ .    ▄▄▄▄·  ▄· ▄▌ \n");
usleep(time);
printf("                                                          ·██ ▐███▪▐█ ▀█ ██▪ ██ ▀▄.▀·    ▐█ ▀█▪▐█▪██▌ \n");
usleep(time);
printf("                                                          ▐█ ▌▐▌▐█·▄█▀▀█ ▐█· ▐█▌▐▀▀▪▄    ▐█▀▀█▄▐█▌▐█▪ \n");
usleep(time);
printf("                                                          ██ ██▌▐█▌▐█ ▪▐▌██. ██ ▐█▄▄▌    ██▄▪▐█ ▐█▀·. \n");
usleep(time);
printf("                                                          ▀▀  █▪▀▀▀ ▀  ▀ ▀▀▀▀▀•  ▀▀▀     ·▀▀▀▀   ▀ •  \n");
usleep(time);
printf("\n");


printf("                                                                Felix, Jannik, Moritz & Tewes\n");
usleep(time);
printf("\n");
printf("\n");
printf("\n");

usleep(time);
printf("\x1b[36m                                                              ┏┓        ╹╹┏┓╹╹       ┏┓           \x1b[0m\n");
printf("\x1b[36m                                                              ┃┃┏┓┏┓┏┏    ┣     ╋┏┓  ┗┓╋┏┓┏┓╋     \x1b[0m\n");
printf("\x1b[36m                                                              ┣┛┛ ┗ ┛┛    ┻     ┗┗┛  ┗┛┗┗┻┛ ┗     \x1b[0m\n");
                               
return 0;
}

int gameover()
{

printf("\033[0;31m                                        ▄████  ▄▄▄       ███▄ ▄███▓▓█████     ▒█████   ██▒   █▓▓█████  ██▀███     \x1b[0m\n");
usleep(time);
printf("\033[0;31m                                        ██▒ ▀█▒▒████▄    ▓██▒▀█▀ ██▒▓█   ▀    ▒██▒  ██▒▓██░   █▒▓█   ▀ ▓██ ▒ ██▒   \x1b[0m\n");
usleep(time);
printf("\033[0;31m                                       ▒██░▄▄▄░▒██  ▀█▄  ▓██    ▓██░▒███      ▒██░  ██▒ ▓██  █▒░▒███   ▓██ ░▄█ ▒   \x1b[0m\n");
usleep(time);
printf("\033[0;31m                                       ░▓█  ██▓░██▄▄▄▄██ ▒██    ▒██ ▒▓█  ▄    ▒██   ██░  ▒██ █░░▒▓█  ▄ ▒██▀▀█▄     \x1b[0m\n");
usleep(time);
printf("\033[0;31m                                       ░▒▓███▀▒ ▓█   ▓██▒▒██▒   ░██▒░▒████▒   ░ ████▓▒░   ▒▀█░  ░▒████▒░██▓ ▒██▒   \x1b[0m\n");
usleep(time);
printf("\033[0;31m                                        ░▒   ▒  ▒▒   ▓▒█░░ ▒░   ░  ░░░ ▒░ ░   ░ ▒░▒░▒░    ░ ▐░  ░░ ▒░ ░░ ▒▓ ░▒▓░   \x1b[0m\n");
usleep(time);
printf("\033[0;31m                                         ░   ░   ▒   ▒▒ ░░  ░      ░ ░ ░  ░     ░ ▒ ▒░    ░ ░░   ░ ░  ░  ░▒ ░ ▒░   \x1b[0m\n");
usleep(time);
printf("\033[0;31m                                       ░ ░   ░   ░   ▒   ░      ░      ░      ░ ░ ░ ▒       ░░     ░     ░░   ░    \x1b[0m\n");
usleep(time);
printf("\033[0;31m                                             ░       ░  ░       ░      ░  ░       ░ ░        ░     ░  ░   ░        \x1b[0m\n");
usleep(time);
printf("\033[0;31m                                                            ░                      \x1b[0m\n");

printf("\n");
usleep(time);
usleep(time);
printf("\x1b[36m                                                           ┏┓        ╹╹┏┓╹╹       ┳┓              \x1b[0m\n");
printf("\x1b[36m                                                           ┃┃┏┓┏┓┏┏    ┣     ╋┏┓  ┣┫┏┓┏╋┏┓┏┓╋     \x1b[0m\n");
printf("\x1b[36m                                                           ┣┛┛ ┗ ┛┛    ┻     ┗┗┛  ┛┗┗ ┛┗┗┻┛ ┗     \x1b[0m\n");


return 0;
}

int endGame()
{

printf("\x1b[32m                                                ██    ██  ██████  ██    ██     ██     ██  ██████  ███    ██     \x1b[0m\n");  
usleep(time);
printf("\x1b[32m                                                 ██  ██  ██    ██ ██    ██     ██     ██ ██    ██ ████   ██     \x1b[0m\n");  
usleep(time);
printf("\x1b[32m                                                  ████   ██    ██ ██    ██     ██  █  ██ ██    ██ ██ ██  ██     \x1b[0m\n");  
usleep(time);
printf("\x1b[32m                                                   ██    ██    ██ ██    ██     ██ ███ ██ ██    ██ ██  ██ ██     \x1b[0m\n");  
usleep(time);
printf("\x1b[32m                                                   ██     ██████   ██████       ███ ███   ██████  ██   ████     \x1b[0m\n");  

printf("\n");                                                            
                                                            
usleep(time);
usleep(time);
printf("\x1b[36m                                                              ┳┓    ┓     ┏••        •  ┓         \x1b[0m\n");
printf("\x1b[36m                                                              ┃┃┏┓┏┓┃┏┏┓  ╋┓┏┏┓┏  ┏┏┓┓┏┓┃┏┓┏┓     \x1b[0m\n");
printf("\x1b[36m                                                              ┻┛┗┻┛┗┛┗┗   ┛┗┻┛ ┛  ┛┣┛┗┗ ┗┗ ┛┗     \x1b[0m\n");
printf("\x1b[36m                                                                                   ┛              \x1b[0m\n");
                                                                                                                         

return 0;
}