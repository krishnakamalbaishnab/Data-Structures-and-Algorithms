# Given an array of N integers, write a program to implement the Selection sorting algorithm.

# Examples:

# Example 1:
# Input: N = 6, array[] = {13,46,24,52,20,9}
# Output: 9,13,20,24,46,52
# Explanation: After sorting the array is: 9, 13, 20, 24, 46, 52

# Example 2:
# Input: N=5, array[] = {5,4,3,2,1}
# Output: 1,2,3,4,5
# Explanation: After sorting the array is: 1, 2, 3, 4, 5


# Function to perform selection sort
def selection_sort(arr):
    n = len(arr)  # Find the length of the array
    for i in range(n - 1):  # Iterate over the array, excluding the last element
        mini = i  # Assume the current index is the minimum
        for j in range(i + 1, n):  # Iterate over the unsorted part of the array
            if arr[j] < arr[mini]:  # If a smaller element is found, update the minimum index
                mini = j
        # Swap the found minimum element with the first element of the unsorted part
        arr[mini], arr[i] = arr[i], arr[mini]

    # Print the array after sorting
    print("After selection sort:")
    for num in arr:
        print(num, end=" ")  # Print each element of the sorted array
    print()  # Newline after printing the sorted array

# Main entry point of the program
if __name__ == "__main__":
    arr = [13, 46, 24, 52, 20, 9]  # Initialize an array with unsorted elements
    print("Before selection sort:")  # Print the array before sorting
    for num in arr:
        print(num, end=" ")  # Print each element of the unsorted array
    print()  # Newline after printing the unsorted array
    
    selection_sort(arr)  # Call the selection sort function to sort the array
