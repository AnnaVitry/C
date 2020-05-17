#include "rubiks.h"
#include <stdlib.h>
#include <stdio.h>

int *look_for_space(int **table, int *lines, int *columns, int value)
{
    int y = 0;
    int x = 0;
    int *ret = malloc(2 * sizeof(int));

    while (y < 4) {
        if ((lines[y] == 0) && (columns[x] == 0)
            && (table[y][x] != value)) {
                ret[0]= y;
                ret[1] = x;
                return (ret);
        }
        if (x == 3) {
            y++;
            x = 0;
        }
        else
            x++;
    }

    return (NULL);
}
