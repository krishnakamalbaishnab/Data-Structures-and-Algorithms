# If the array has a fixed size (like in low-level languages such as C), 
# We need to manually manage shifting when inserting an element. However, 
# Python's array module dynamically resizes, so We don’t need to predefine the size. 
# But if we want to handle a fixed-size array manually, we can do something like this:




import array

# Define an array with a fixed size of 10 but only 6 elements initialized
arr = array.array('i', [1, 2, 3, 5, 6, 7] + [0] * 4)  # Remaining spaces as 0

current_size = 6  # Number of actual elements

# Append an element (adding at the next available index)
append_element = 8
arr[current_size] = append_element
current_size += 1

print("After appending:", arr[:current_size].tolist())

# Insert at index 3 (shifting required)
insert_index = 3
insert_element = 4

# Shift elements to the right
for i in range(current_size, insert_index, -1):
    arr[i] = arr[i - 1]

# Insert the new element
arr[insert_index] = insert_element
current_size += 1

print(f"After inserting {insert_element} at index {insert_index}:", arr[:current_size].tolist())
