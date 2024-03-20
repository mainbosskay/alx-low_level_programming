#!/usr/bin/python3
"""Island perimeter measuring has been established"""


def island_perimeter(grid):
    """Calculating and returns the perimeter of the island
    Args: grid (list): lists of integers in the island
    the grid: land = 1 and water = 0"""
    rows = len(grid)
    permeta = 0
    for k in range(rows):
        colums = len(grid[k])
        for t in range(colums):
            if (grid[k][t] == 1):
                ledg = 1 if t == 0 or grid[k][t - 1] == 0 else 0
                tedg = 1 if k == 0 or grid[k - 1][t] == 0 else 0
                redg = 1 if t == colums - 1 or grid[k][t + 1] == 0 else 0
                bedg = 1 if k == rows - 1 or grid[k + 1][t] == 0 else 0
                permeta += (ledg + tedg + redg + bedg)
    return permeta
