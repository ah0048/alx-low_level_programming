#!/usr/bin/python3
'''
module to calculate grid
'''


def island_perimeter(grid):
    '''
    grid function
    '''
    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])
    i = 0
    j = 0
    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1:
                perimeter += 4
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
    return perimeter
