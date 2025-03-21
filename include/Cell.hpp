#ifndef CELL
#define CELL

#include <stdint.h>

#define MAX_SUM 25

class Cell {
public:
    Cell(int16_t x, int16_t y);
    bool operator < (const Cell& cell) const;
    int32_t sumDigits(int16_t number);
    bool isAvailable();
    Cell up();
    Cell down();
    Cell left();
    Cell right();
private:
    int16_t x;
    int16_t y;
};

#endif /* CELL */