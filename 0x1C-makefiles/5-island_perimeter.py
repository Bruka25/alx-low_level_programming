#!/usr/bin/python3

""" Module for finding the perimeter of
    an island
"""


def island_perimeter(grid):
    """Function that returns the perimeter of
       the grid
    """
    perim_count = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):

            if i >= len(grid) or j >= len(grid[0]):
                continue
            elif i < 0 or j < 0 or grid[i][j] == 0:
                continue

            elif grid[i][j] == 1:
                perim_count += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perim_count -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perim_count -= 2

    return perim_count
