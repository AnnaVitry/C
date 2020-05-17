#include "rubiks.h"

void algo_line(int **table, int line)
{
    int q = table[line][0];

    for (int i = 0; i < 3; i++) {
        table[line][i] = table[line][i + 1];
    }
    table[line][3] = q;
}

void algo_column(int **table, int column)
{
    int q = table[0][column];

    for (int i = 0; i < 3; i++) {
        table[i][column] = table[i + 1][column];
    }
    table[3][column]= q;
}

void algo_square(int **table, int square)
{
    int line_s;
    int col_s;
    int q;

    if (square == 0) {
        line_s = 0;
        col_s = 0;
    }
    else if (square == 1) {
        line_s = 0;
        col_s = 2;
    }
    else if (square == 2) {
        line_s = 2;
        col_s = 0;
    }
    else {
        line_s = 2;
        col_s = 2;
    }
        q = table[line_s][col_s];

        table[line_s][col_s] = table[line_s + 1][col_s];
        table[line_s + 1][col_s] = table[line_s + 1][col_s +1];
        table[line_s + 1][col_s + 1] = table[line_s][col_s + 1];
        table[line_s][col_s + 1] = q;
}

void algo_square_reverse(int **table, int square)
{
    int line_s;
    int col_s;
    int q;
    
    if (square == 0) {
        line_s = 0;
        col_s = 0;
    }
    else if (square == 1) {
        line_s = 0;
        col_s = 2;
        }
    else if (square == 2) {
        line_s = 2;
        col_s = 0;
    }
    else {
        line_s = 2;
        col_s = 2;
    }
        q = table[line_s][col_s];
        table[line_s][col_s] = table[line_s][col_s + 1];
        table[line_s + 0][col_s + 1] = table[line_s + 1][col_s + 1];
        table[line_s + 1][col_s + 1] = table[line_s + 1][col_s];
        table[line_s + 1][col_s] = q;
}


void algo_column_reverse(int **table, int column)
{
    int q = table[3][column];

    for (int i = 3; i > 0; i--) {
        table[i][column] = table[i - 1][column];
    }
    table[0][column]= q;
}

void algo_line_reverse(int **table, int line)
{
    int q = table[line][3];

    for (int i = 3; i > 0; i--) {
        table[line][i] = table[line][i - 1];
    }
    table[line][0] = q;
}
