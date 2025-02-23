



import array

def reverseArray(arr):
    # Step 1: Create an auxiliary array B of the same length as A
    b = array.array('i', [0] * len(arr))

    # Step 2: Copy elements of A to B in reverse order
    for i in range(len(arr)):
        b[i] = arr[len(arr) - 1 - i]

    # Step 3: Copy elements from B back to A
    for i in range(len(arr)):
        arr[i] = b[i]

# Original array A
array1 = array.array('i', [1, 2, 3, 4, 5, 6, 7])

print("Original Array:", array1)

reverseArray(array1)

print("Reversed Array:", array1)
