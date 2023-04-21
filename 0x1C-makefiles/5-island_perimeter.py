def island_perimeter(grid):
    """
    Calculates the perimeter of the island in the given grid.

    Args:
        grid (list): A list of list of integers, representing a rectangular grid
            where 0 is water and 1 is land.

    Returns:
        The perimeter of the island as an integer.

    Raises:
        None.
    """
    if not grid:
        return 0

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # checking toe left
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # checks to right
                if j == cols-1 or grid[i][j+1] == 0:
                    perimeter += 1
                # check top
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # checks bottom
                if i == rows-1 or grid[i+1][j] == 0:
                    perimeter += 1

    return (perimeter)
