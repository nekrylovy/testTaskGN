#include <cmath>
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

int32_t Cell::sumDigits(int16_t number)
{
    int32_t sum = 0;

    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return abs(sum);
}

bool Cell::isAvailable() {
    return sumDigits(x) + sumDigits(y) <= MAX_SUM;
}

Cell Cell::up()    { return Cell(x, y + 1); }
Cell Cell::down()  { return Cell(x, y - 1); }
Cell Cell::left()  { return Cell(x - 1, y); }
Cell Cell::right() { return Cell(x + 1, y); }