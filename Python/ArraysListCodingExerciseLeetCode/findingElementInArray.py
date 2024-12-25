import numpy as np 

myArray = np.array([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15])

def findNumbers(array, targetValue):
    for i in range(len(array)):
        if array[i] == targetValue:
            print("The number is present at index", i)
            break
    else:
        print("The number is not present in the list")


findNumbers(myArray,2)