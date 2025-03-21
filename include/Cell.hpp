#ifndef CELL
#define CELL

#include <stdint.h>

class Cell {
public:
    Cell(int16_t x, int16_t y);
    bool operator < (const Cell& cell) const;
private:
    int16_t x;
    int16_t y;
};

#endif /* CELL */