def binary_search_recursive(arr, key, left, right):
    if left > right:
        return -1  # Key not found
    
    mid = left + (right - left) // 2
    
    if arr[mid] == key:
        return mid  # Key found, return index
    elif arr[mid] < key:
        return binary_search_recursive(arr, key, mid + 1, right)  # Search right half
    else:
        return binary_search_recursive(arr, key, left, mid - 1)  # Search left half

# Given array (sorted)
array = [4, 8, 10, 15, 18, 21, 27, 29, 33, 34, 39, 40, 43]
key_element = 22

# Perform binary search
index = binary_search_recursive(array, key_element, 0, len(array) - 1)

# Print result
if index != -1:
    print(f"Element {key_element} found at index {index}")
else:
    print(f"Element {key_element} not found in array")
