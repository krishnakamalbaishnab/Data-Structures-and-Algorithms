# Array Abstract Data Type (ADT) in Python
# An Array ADT (Abstract Data Type) is a data structure that stores elements of the same type in contiguous memory locations. 

#TODO:
# In Python, arrays can be implemented using lists or the array module from the standard library.

# The array module provides an array() function that returns an array object which is similar to a list but stores elements of the same type.TO

# Array implementation using a list
arr = [10, 20, 30, 40, 50]

# Accessing elements
print(arr[2])  # Output: 30

# Inserting an element
arr.insert(2, 25)  # Insert 25 at index 2
print(arr)  # Output: [10, 20, 25, 30, 40, 50]

# Appending an element
arr.append(60)
print(arr)  # Output: [10, 20, 25, 30, 40, 50, 60]

# Deleting an element
arr.remove(25)  # Removes first occurrence of 25
print(arr)  # Output: [10, 20, 30, 40, 50, 60]

# Searching for an element
index = arr.index(40)  # Finds index of 40
print(index)  # Output: 3

# Traversing the array
for elem in arr:
    print(elem, end=" ")  # Output: 10 20 30 40 50 60



# 2. Implementation Using array Module (Static)
# The array module provides a more memory-efficient array implementation where all elements must be of the same type.


import array

# Creating an integer array
arr = array.array('i', [10, 20, 30, 40, 50])  # 'i' represents signed integers

# Accessing elements
print(arr[2])  # Output: 30

# Inserting an element
arr.insert(2, 25)
print(arr.tolist())  # Output: [10, 20, 25, 30, 40, 50]

# Appending an element
arr.append(60)
print(arr.tolist())  # Output: [10, 20, 25, 30, 40, 50, 60]

# Deleting an element
arr.remove(25)
print(arr.tolist())  # Output: [10, 20, 30, 40, 50, 60]

# Searching for an element
index = arr.index(40)
print(index)  # Output: 3

# Traversing the array
for elem in arr:
    print(elem, end=" ")  # Output: 10 20 30 40 50 60
