#!/usr/bin/python3
'''
module to calculate grid
'''


def island_perimeter(grid):
    '''
    grid function
    '''
    num = 0
    limit = 100
    flag_row = 1
    flag_element = 1
    for row in grid:
        if flag_row > limit:
            break
        for element in row:
            if flag_element > limit:
                break
            if element == 1:
                num = num + 1
            flag_element = flag_element + 1
        flag_row = flag_row + 1
    perimeter = 2 * num + 2
    return perimeter
