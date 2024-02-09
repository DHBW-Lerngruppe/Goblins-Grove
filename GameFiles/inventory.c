#include "inventory.h"
#include <stdlib.h>
#include <string.h>

void addItemToInventory(char ***inventory, int *size, char *item) {
    (*size)++;
    *inventory = realloc(*inventory, (*size) * sizeof(char*));
    (*inventory)[(*size) - 1] = strdup(item);
}
