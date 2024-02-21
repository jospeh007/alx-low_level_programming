#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
    - grid (list of list of int): Represents the island where 0 is water and 1 is land.

    Returns:
    - int: The perimeter of the island.

    Constraints:
    - Grid is rectangular, width and height don’t exceed 100.
    - Grid is completely surrounded by water, and there is one island (or nothing).
    - The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
    - Grid cells are connected horizontally/vertically (not diagonally).
    """

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Assume land has four sides
                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract two sides (one for each adjacent land)
                # Check top neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract two sides (one for each adjacent land)

    return perimeter

# Test the function
if __name__ == "__main__":
    grid = [
        [0, 1, 0, 0],
        [1, 1, 1, 0],
        [0, 1, 0, 0],
        [1, 1, 0, 0]
    ]
    print(island_perimeter(grid))  # Output should be 16
