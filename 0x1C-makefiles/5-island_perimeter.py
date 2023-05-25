#!/usr/bin/python3
"""finds the perimeter of an island"""


def island_perimeter(grid):
    """returns the perimeter of an island
    Args:
        i = horizontal cells
        j = vertical cells
        island = number of island
        boundary = repeated grid boundary

    """
    boundary = 0
    island = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (j > 0 and grid[i][j-1] == 1 and grid[i][j] == 1):
                boundary += 2
            if (i > 0 and grid[i-1][j] == 1 and grid[i][j] == 1):
                boundary += 2
            if grid[i][j] == 1:
                island += 1
    return 4*island - boundary
