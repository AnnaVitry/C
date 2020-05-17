#include "rubiks.h"
#include <stdio.h>

void print_tab(int **table)
{
    printf("-----------------\n| %d | %d | %d | %d |\n-----------------\n| %d | %d | %d | %d |\n-----------------\n| %d | %d | %d | %d |\n-----------------\n| %d | %d | %d | %d |\n-----------------\n", table[0][0], table[0][1], table[0][2], table[0][3], table[1][0], table[1][1], table[1][2], table[1][3], table[2][0], table[2][1], table[2][2], table[2][3],  table[3][0], table[3][1], table[3][2],  table[3][3]);
}
