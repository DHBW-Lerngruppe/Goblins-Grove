#include <stdio.h>
#include <unistd.h>

int gameover()
{
int time = 120000;

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