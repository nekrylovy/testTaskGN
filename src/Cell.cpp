#include "Cell.hpp"

Cell::Cell(int16_t x = 0, int16_t y = 0)
{
    this->x = x;
    this->y = y;
}

bool Cell::operator < (const Cell& cell) const
{
    return x == cell.x ? y < cell.y : x < cell.x;
}