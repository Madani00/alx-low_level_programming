#!/usr/bin/python3
"""
if value is 1 add 4 to the perimeter and then checks neighboring cells
If there is a neighboring cell to the top or left, subtracts 2
"""


def island_perimeter(grid):
    """function"""
    prim = 0
    if len(grid) == 0:
        return permi

    for i in range(len(grid)):
        for k in range(len(grid[0])):
            if grid[i][k] == 1:
                prim += 4
                if k > 0 and grid[i][k-1] == 1:
                    prim -= 2
                if grid[i][k] == 1 and grid[i-1][k] == 1:
                    prim -= 2
    return prim
