#reverse array by swapping elements

def reverse_array(arr):
    left = 0
    right = len(arr) - 1
    
    while left < right:
        # Swap elements at left and right indices
        arr[left], arr[right] = arr[right], arr[left]
        
        # Move indices towards the center
        left += 1
        right -= 1
    
    return arr

# Test with the given array
arr = [6, 9, 8, 7, 5, 3, 1, 10, 12, 14]
reversed_arr = reverse_array(arr)
print(reversed_arr)




#using foor loop two pointers


def reverse_array(arr):
    n = len(arr)
    
    # Only need to iterate through half the array
    for i in range(n // 2):
        # Swap elements equidistant from the ends
        arr[i], arr[n-1-i] = arr[n-1-i], arr[i]
    
    return arr

# Test with the given array
arr = [6, 9, 8, 7, 5, 3, 1, 10, 12, 14]
reversed_arr = reverse_array(arr)
print(reversed_arr)