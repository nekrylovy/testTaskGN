#include <iostream>
#include <queue>
#include <set>

#include "Cell.hpp"

int main(void)
{
    std::queue<Cell> queue;
    std::set<Cell> visited;
    Cell cell(1000, 1000);
    uint32_t counter = 0;

    queue.push(cell);
    while (!queue.empty())
    {
        cell = queue.front();
        if (visited.find(cell) == visited.end())
        {
            if (cell.isAvailable())
            {
                queue.push(cell.up());
                queue.push(cell.down());
                queue.push(cell.left());
                queue.push(cell.right());
                visited.insert(cell);
                counter++;
            }
        }
        queue.pop();
    }
    std::cout << "Пройдено клеток: " << counter << std::endl;
    return 0;
}