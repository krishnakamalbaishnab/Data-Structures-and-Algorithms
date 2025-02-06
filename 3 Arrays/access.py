#declaring an array in python in different stypes


# 1 using list,most common style

array = [1,2,3,4,5,6] #this is a list and it's dynamic and can holds value of different data types

# 2 Using the array module

import array

array1 = array.array('i',[1,2,3,4,5,6])  # 'i' stands for integer data types, that means it can not have any other data types

# 3 using the numpy modules 

import numpy as np

array2 = np.array([1,2,3,4,5,6])


# print(array)
# print(array1)
# print(array2)


# TODO:Choosing the Right Option: Use lists for general-purpose programming
#Use array.array if you need type-restricted arrays. 
#Use NumPy arrays for performance-intensive numerical operations.


#accessing the elements in an array

#traversing through an array
for i in (array2):
    print(i)


#with index

for i in range(len(array2)):
    print(array2[i])



for i in range(len(array2)):
    print(f"Index {i}: Value {array2[i]}")
