# In most programming languages, arrays have a fixed size once declared. 
# However, you can increase the size of an array using different methods depending on the language you're using.



# Python's list is dynamic, so you can increase its size easily:
arr = [1, 2, 3]
arr.append(4)  # Adds a single element
arr.extend([5, 6])  # Adds multiple elements
print(arr)  # Output: [1, 2, 3, 4, 5, 6]

# To manually resize:
arr += [0] * 3  # Increase size by 3, filling with 0s
print(arr)
