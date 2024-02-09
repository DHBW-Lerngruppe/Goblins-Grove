#include <stdio.h>
#include <unistd.h>

int endGame()
{
int time = 140000;  

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