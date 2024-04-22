#!/usr/bin/python3
""" Defines the island_perimeter function"""


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid:
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island
    (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t connected
    to the water around the island)."""
    i = 0
    p = 0
    while i < len(grid):
        idx = 0
        for j in grid[i]:
            if j == 1:
                if i == 0:
                    p = p + 1
                elif i > 0:
                    if grid[i - 1][idx] != 1:
                        p = p + 1
                if i == len(grid) - 1:
                    p = p + 1
                elif i < len(grid) - 1:
                    if grid[i + 1][idx] != 1:
                        p = p + 1
                if idx == 0:
                    p = p + 1
                elif idx > 0:
                    if grid[i][idx - 1] != 1:
                        p = p + 1
                if idx == len(grid[i]) - 1:
                    p = p + 1
                elif idx < len(grid[i]) - 1:
                    if grid[i][idx + 1] != 1:
                        p = p + 1
            idx = idx + 1
        i = i + 1
    return p
