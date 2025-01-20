import array as arr

myArrayOfNumbers = arr.array('i',[1,2,3,4,5,6,7,8,9,10])


# Traversing the array

for i in myArrayOfNumbers:
    print(i)

# the time complexity of the traversal operation is O(n) because we are visiting each element of the array once.

# the space complexity of the traversal operation is O(1) because we are not using any extra space to traverse the array. We are just visiting each element of the array once.

# the above code is traversing the array and printing each element of the array.

#using functions to traverse the array.

print("Using functions to traverse the array")

def traverArray(array):
    for i in array:
        print(i)

traverArray(myArrayOfNumbers)

# the above code is using a function to traverse the array and print each element of the array.
#the time complexity of the traversal operation is O(n) because we are visiting each element of the array once.

# the space complexity of the traversal operation is O(1) because we are not using any extra space to traverse the array. We are just visiting each element of the array once.
#check even numbers from the array.

print("Check even numbers from the array")

def checkEvenNumbers(array):
    for i in array:
        if i%2 == 0:
            print(i)

checkEvenNumbers(myArrayOfNumbers)

# the above code is using a function to check even numbers from the array and print each even number of the array.