def binary_search(arr, key):
    left, right = 0, len(arr) - 1
    
    while left <= right:
        mid = left + (right - left) // 2
        
        if arr[mid] == key:
            return mid  # Key found, return index
        elif arr[mid] < key:
            left = mid + 1  # Search right half
        else:
            right = mid - 1  # Search left half
    
    return -1  # Key not found

# Given array (sorted)
array = [4, 8, 10, 15, 18, 21, 27, 29, 33, 34, 39, 40, 43]
key_element = 18

# Perform binary search
index = binary_search(array, key_element)

# Print result
if index != -1:
    print(f"Element {key_element} found at index {index}")
else:
    print(f"Element {key_element} not found in array")
