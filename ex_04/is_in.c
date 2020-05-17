#include "rubiks.h"
#include <stdio.h>

int is_in_line(int **table, int line, int value)
{
    unsigned int i = 0;
    int valeur_retour = 1;

    for (i = 0; i < 4; i++) {
        if (table[line][i] == value) {
            valeur_retour = 0;
        }
    }
    return (valeur_retour);
}

int is_in_col(int **table, int column, int value)
{
    unsigned int i = 0;
    int valeur_retour = 1;

    for (i = 0; i < 4; i++) {
        if (table[i][column] == value) {
                valeur_retour = 0;
        }
    }
        return (valeur_retour);
}

