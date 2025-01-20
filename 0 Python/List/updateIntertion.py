myList =   [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

print(myList)

myList[0] = 11  #this will update the value at index 0

print(myList) #output: [11, 2, 3, 4, 5, 6, 7, 8, 9, 10]


myList[1:3] = [12, 13] #this will update the value at index 1 and 2


print(myList) #output: [11, 12, 13, 4, 5, 6, 7, 8, 9, 10]



#Methods for inserting new elements in the list

#1. Inserting an element at the end of the list
#2. Inserting an element at the beginning of the list
#3. Inserting an element at a specific index in the list
#4. Inserting multiple elements in the list
#5. Inserting another list to list

#List Methods
#1.Insert()
#2.Append()
#3.Extend()

listOfIntegers = [1,2,3,4,5,6,7,8,9,10]
print(listOfIntegers)
listOfIntegers.insert(0, 0) #inserting 0 at index 0

print(listOfIntegers) #output: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10] #tis will move one step to the right all the elements in the list ----------------------> O(n)

listOfIntegers.append(11) #appending 11 at the end of the list

print(listOfIntegers) #output: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11] ----------------------> O(1)

listOfIntegers.extend([12,13,14]) #extending the list with 12,13,14

print(listOfIntegers) #output: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14] ----------------------> O(1)


