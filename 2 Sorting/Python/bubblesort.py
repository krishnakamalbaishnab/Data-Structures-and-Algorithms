def bubble_sort(arr):
    """
    Function to perform bubble sort on a list of numbers.

    Args:
    arr: List of integers to be sorted.
    """
    n = len(arr)  # Get the length of the list
    # Loop over the list from the end towards the start
    for i in range(n - 1, -1, -1):
        did_swap = False  # Initialize a flag to check if any swapping occurs in this pass

        # Traverse the list up to the unsorted part (i)
        for j in range(i):
            # If the current element is greater than the next element, swap them
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                did_swap = True  # Set the flag to True if a swap happens

        # If no elements were swapped, the list is already sorted, so break out of the loop
        if not did_swap:
            break

    # Print the sorted list after bubble sort completes
    print("After bubble sort: ")
    print(" ".join(map(str, arr)))  # Convert list elements to strings and print them

if __name__ == "__main__":
    # Initialize the list of integers to be sorted
    arr = [13, 46, 24, 52, 20, 9]
    
    # Print the list before sorting
    print("Before Using Bubble Sort: ")
    print(" ".join(map(str, arr)))  # Convert list elements to strings and print them
    
    # Call the bubble_sort function to sort the list
    bubble_sort(arr)
