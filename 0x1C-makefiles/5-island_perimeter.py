#!/usr/bin/python3
"""a module that defines a function that computes an island perimeter"""


def index_exists(matrix, r_ind, c_ind):
    """a function that checks if a coordinate exists in a matrix"""
    try:
        _ = matrix[r_ind][c_ind]
    except IndexError:
        return False
    return True


def get_adjacent_cells(matrix, coordinate):
    """a function that returns a tuple containing the coordinates
        of adjacent cells in a given matrix"""
    x_index = coordinate[0]
    y_index = coordinate[1]
    res_adj_list = []
    if not index_exists(matrix, x_index, y_index):
        return res_adj_list

    if index_exists(matrix, x_index - 1, y_index - 1) and\
            matrix[x_index - 1][y_index - 1] == 1:
        if (x_index - 1 >= 0 and y_index - 1 >= 0):
            res_adj_list.append((x_index - 1, y_index - 1))
    if index_exists(matrix, x_index - 1, y_index) and\
            matrix[x_index - 1][y_index] == 1:
        if (x_index - 1 >= 0 and y_index >= 0):
            res_adj_list.append((x_index - 1, y_index))
    if index_exists(matrix, x_index - 1, y_index + 1) and\
            matrix[x_index - 1][y_index + 1] == 1:
        if (x_index - 1 >= 0 and y_index + 1 >= 0):
            res_adj_list.append((x_index - 1, y_index + 1))
    if index_exists(matrix, x_index, y_index + 1) and\
            matrix[x_index][y_index + 1] == 1:
        if (x_index >= 0 and y_index + 1 >= 0):
            res_adj_list.append((x_index, y_index + 1))
    if index_exists(matrix, x_index + 1, y_index + 1) and\
            matrix[x_index + 1][y_index + 1] == 1:
        if (x_index + 1 >= 0 and y_index + 1 >= 0):
            res_adj_list.append((x_index + 1, y_index + 1))
    if index_exists(matrix, x_index + 1, y_index) and\
            matrix[x_index + 1][y_index] == 1:
        if (x_index + 1 >= 0 and y_index >= 0):
            res_adj_list.append((x_index + 1, y_index))
    if index_exists(matrix, x_index + 1, y_index - 1) and\
            matrix[x_index + 1][y_index - 1] == 1:
        if (x_index + 1 >= 0 and y_index - 1 >= 0):
            res_adj_list.append((x_index + 1, y_index - 1))
    if index_exists(matrix, x_index, y_index - 1) and\
            matrix[x_index][y_index - 1] == 1:
        if (x_index >= 0 and y_index - 1 >= 0):
            res_adj_list.append((x_index, y_index - 1))

    return res_adj_list


def island_perimeter(grid):
    """a function that defines an island perimeter"""
    adjacency_list = []
    if not grid or not grid[0]:
        return
    for row_index, row in enumerate(grid):
        for col_index, column in enumerate(row):
            if not column:
                continue
            adjacent_cells = get_adjacent_cells(grid, (row_index, col_index))
            if adjacent_cells:
                adjacency_list = [*adjacency_list,
                                  *([item for
                                      item in adjacent_cells if
                                      item not in adjacency_list])]
    return (2 * len(adjacency_list)) + 2
