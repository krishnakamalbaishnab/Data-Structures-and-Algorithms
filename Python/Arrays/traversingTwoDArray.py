import numpy as np 



myTwodArray = np.array([[1,2,3],[4,5,6],[7,8,9]])


def traverseArray(array):
    for i in range(len(array)): #here length of the array is the number of rows in the array
        for j in range(len(array[0])): #here length of the array[0] is the number of columns in the array
            print(array[i][j])

traverseArray(myTwodArray)

#the above fuction is taking the array as input and then it is traversing the array using two for loops. The first for loop is for the rows and the second for loop is for the columns. It is printing the element at the given row and column index.

#the time complexity of the traversal operation is O(n*m) because we are visiting each element of the array once.


#the space complexity of the traversal operation is O(1) because we are not using any extra space to traverse the array. We are just visiting each element of the array once.
