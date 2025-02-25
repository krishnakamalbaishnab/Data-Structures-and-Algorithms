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