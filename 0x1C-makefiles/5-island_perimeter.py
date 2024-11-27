#!/usr/bin/python3
"""
Defines a function to calculate the perimeter of an island.
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of an island.
    
    Args:
        grid (list of list of int): The grid map of the island (1 for land, 0 for water).

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2
    return perimeter
