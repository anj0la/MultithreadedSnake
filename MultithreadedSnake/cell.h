/**
* File: cell.h
*
* Author: Anjola Aina
* Last Modified: Thursday, April 6th, 2023
*
* This file contains the cell struct, which represents a point in the game board.
* There contains two methods, one to create a cell and another to free a cell.
* There also exists an enum called cell_type, which determines what "object" is occupying the cell.
* To map the enum to its equivalent string, the following source was used to help achieve this: https://www.linkedin.com/pulse/mapping-enum-string-c-language-sathishkumar-duraisamy/
*/
#ifndef cell_h
#define cell_h
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// The types that a cell can take
typedef enum cell_type {
    EMPTY,
    APPLE,
    SNAKE
} cell_type; 

class Cell {
private:
    int row;
    int col;
    cell_type type;
public:
    Cell(int row_p, int col_p, cell_type type_p);
    Cell(int row_p, int col_p);
    Cell();
    ~Cell();
    int get_row();
    int get_col();
    cell_type get_type();
    void set_type(cell_type new_type);
    void set_cell(int new_row, int new_col, cell_type new_type);
    bool same_cell(Cell* cell_p);
};

#endif