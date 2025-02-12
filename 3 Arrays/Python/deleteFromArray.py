


import array

arr = array.array('i', [1, 2, 3, 4, 5, 6, 7, 8, 9])

# Deleting element at index 3 (which is 4)
arr.pop(3)

print(arr)  # Output: array('i', [1, 2, 3, 5, 6, 7, 8, 9])


# Manual Shifting (C++ Style) in Python


import array

arr = array.array('i', [1, 2, 3, 4, 5, 6, 7, 8, 9])

index_to_delete = 3

# Shifting elements manually (C++ way)
for i in range(index_to_delete, len(arr) - 1):
    arr[i] = arr[i + 1]  # Shift left

# Remove the last element (since it's duplicated)
arr.pop()

print(arr)  # Output: array('i', [1, 2, 3, 5, 6, 7, 8, 9])
