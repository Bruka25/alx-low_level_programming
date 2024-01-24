#!/usr/bin/python3

""" Module for finding the perimmeter of
    an island
"""


def island_perimeter(grid):
    """Function that returns the perimeter of
       the grid
    """
    perim_count = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perim_count += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perim_count -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perim_countr -= 2
    return perim_count
