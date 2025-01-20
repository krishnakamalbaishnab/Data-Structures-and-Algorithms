import numpy as np


myArray = np.array([[1,2,3],[4,5,6],[7,8,9],[10,11,12]])

# print(myArray)

def searchelement(array, value):
    for i in range(len(array)):  #------------------------------------> O(n)           |
        for j in range(len(array[0])): #------------------------------> O(m)           |   -----> O(n*m) {Time Complexity}
            if array[i][j] == value: #--------------------------------> O(1)           |
                return f"Element found at index {i},{j}"
    return "Element not found"


print(searchelement(myArray, 7))


#what the above code is coding is that it is taking the array and the value to be searched as input and then it is traversing the array using two for loops. The first for loop is for the rows and the second for loop is for the columns. It is checking if the element at the given row and column index is equal to the value to be searched. If it is equal then it is returning the index of the element. If the element is not found then it is returning "Element not found".s

#the time complexity of the search operation is O(n*m) because we are visiting each element of the array once.

#the space complexity of the search operation is O(1) because we are not using any extra space to search the array. We are just visiting each element of the array once.

#the above code can also be written using while loop. The code is given below: