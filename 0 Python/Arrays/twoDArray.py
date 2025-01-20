import numpy as np

myTwoDArray = np.array([[1,2,3],[4,5,6],[7,8,9]])

print(myTwoDArray)

#the time complexity of the traversal operation is O(n*m) because we are visiting each element of the array once.


#the space complexity of the traversal operation is O(1) because we are not using any extra space to traverse the array. We are just visiting each element of the array once.

#inserting an element at a specific position in the array.

myTwoDArray = np.insert(myTwoDArray,1,[11,12,13],axis=0)

print(myTwoDArray)

#the time complexity of the insertion operation is O(n*m) because we are visiting each element of the array once.

#the space complexity of the insertion operation is O(n*m) because we are using extra space to insert the element in the array.

#inserting an element at a specific position in the array.

# myTwoDArray = np.insert(myTwoDArray,1,[14,15,16],axis=1)

# print(myTwoDArray)

#the time complexity of the insertion operation is O(n*m) because we are visiting each element of the array once.

#the space complexity of the insertion operation is O(n*m) because we are using extra space to insert the element in the array.


#aceesing an element in a 2D array
print("Accessing an element in a 2D array")
twodArray = np.array([[1,2,3],[4,5,6],[7,8,9],[10,11,12]])

print(twodArray)

def accessElement(array,rowIndex,columnIndex):
    if rowIndex >= len(array) or columnIndex >= len(array[0]):
        print("Incorrect Index")
    else:
        print(array[rowIndex][columnIndex])

accessElement(twodArray,1,2)

#what the above function is doing is that it is taking the array and the row and column index as input and then it is checking if the row index is greater than the length of the array or the column index is greater than the length of the array then it is printing incorrect index else it is printing the element at the given row and column index.