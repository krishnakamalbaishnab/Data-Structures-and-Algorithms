from array import *


#Create an array and traverse it using a function.

myArray = array ('i',[1,2,3,4,5,6,7,8,9,10])
print("STEP 1")
for i in range(len(myArray)):
    print(myArray[i])

#Access individual elements through indexes.

print("STEP 2")


print(myArray[0])
print(myArray[5])



#Append any element to the array using the append() method.


print("STEP 3")

myArray.append(11)

print(myArray)


#Insert any element at any position in the array using the insert() method.

myArray.insert(5,12)

print(myArray)

#Extend the array using the extend() method.

myArray.extend([13,14,15])

print(myArray)

#Add items from list into array using fromlist() method.

list = [16,17,18]

myArray.fromlist(list)

print(myArray)

#Remove any element from the array using the remove() method.

myArray.remove(18)

#Remove last element from the array using the pop() method.

myArray.pop()

#Fetch any element through its index using the index() method.


print(myArray.index(16))

#Reverse the array using the reverse() method.

myArray.reverse()
print(myArray)

#Get the length of the array using the length() method.

print(len(myArray))

#Count the occurrence of any element in the array using the count() method.

print(myArray.count(16))

#Convert the array to a list using the tolist() method.

print(myArray.tolist())

#Slice the array using the slice() method.

print(myArray[0:5])

#Clear the array using the clear() method.

myArray.clear()

