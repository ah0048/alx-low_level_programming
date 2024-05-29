#!/usr/bin/python3
'''
module to calculate grid
'''


def island_perimeter(grid):
    '''
    grid function
    '''
    num = 0
    for row in grid:
        for element in row:
            if element == 1:
                num = num + 1
    perimeter = 2 * num + 2
    return perimeter
