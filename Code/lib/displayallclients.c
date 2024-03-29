#include <stdio.h>
#include <string.h>

#include "./headers/loadclients.h"
#include "./headers/menu.h"
#include "./headers/utils.h"

void displayAllClients(Client list[], int lines)
{
    printf("\n%s", CAPTION);
    for (int i = 0; i < lines; i++)
    {
        displayClient(list, i, 1);
    }
    printf("\n");
    Menu(list, lines);
}