def insertion_sort(arr, n):
    # Function to perform insertion sort on the array 'arr' of length 'n'
    
    for i in range(n):  
        # Loop through each element in the array from 0 to n-1 (outer loop)
        
        j = i  
        # Set 'j' to the current index 'i'. 'j' will be used to traverse backwards
        
        while j > 0 and arr[j - 1] > arr[j]:
            # Inner loop: Compare the current element arr[j] with the previous element arr[j - 1]
            # Continue swapping while the previous element is greater
            
            # Swap elements arr[j-1] and arr[j]
            arr[j - 1], arr[j] = arr[j], arr[j - 1]
            
            j -= 1  
            # Move one step backwards to continue checking and sorting previous elements

    # Print the array after sorting
    print("After insertion sort:")
    for i in range(n):
        # Loop to print each element of the sorted array
        print(arr[i], end=" ")  # Print each element on the same line separated by space
    print()  # Move to the next line after printing all elements

# Main block of code that will run when the script is executed
if __name__ == "__main__":
    # Define the array to be sorted
    arr = [13, 46, 24, 52, 20, 9]
    
    # Get the length of the array
    n = len(arr)
    
    # Print the array before sorting
    print("Before using insertion sort:")
    for i in range(n):
        # Loop to print each element of the array before sorting
        print(arr[i], end=" ")  # Print each element on the same line separated by space
    print()  # Move to the next line after printing all elements
    
    # Call the insertion_sort function to sort the array
    insertion_sort(arr, n)
