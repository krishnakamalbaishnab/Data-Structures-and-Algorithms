# 1. Using Lists (Basic 2D Array)


arr = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

# Accessing elements
print(arr[1][2])  # Output: 6 (Row index 1, Column index 2)

# Printing the 2D array
for row in arr:
    print(row)



# 2. Using List Comprehension (Dynamic 2D Array)

rows, cols = 3, 4  # 3x4 matrix filled with zeros
arr = [[0] * cols for _ in range(rows)]
print(arr)

#3. Using NumPy (Efficient 2D Array)

import numpy as np

arr = np.array([
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
])

print(arr[1, 2])  # Output: 6
print(arr)
