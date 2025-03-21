#include <iostream>
#include <queue>
#include <set>

#include "Cell.hpp"

int main(void)
{
    std::queue<Cell> queue;
    std::set<Cell> visited;
    Cell cell(1000, 1000);

    queue.push(cell);
    while (!queue.empty())
    {
        cell = queue.front();
        if (visited.find(cell) == visited.end())
        {
            std::cout << "не посещена\n";
        }
        std::cout << "посещена\n";
        queue.pop();
    }
    return 0;
}