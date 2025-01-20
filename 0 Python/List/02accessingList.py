#we can access the list elements by using the index value.

listOfIntegers = [1,2,3,4,5,6,7,8,9,10]

print(listOfIntegers[0]) #output: 1

#but when we use negative index value then it will start from the end of the list.

print(listOfIntegers[-1]) #output: 10

print(listOfIntegers[-2]) #output: 9

#we can look an item in the list by using the index value. If the index value is out of range then it will throw an error.
print(5 in listOfIntegers) #output: True

print(15 in listOfIntegers) #output: False

#traversing the list using for loop
#we can traverse the list using for loop. The code is given below:

listOfMixedItesm = [1, "apple", 2, "banana", 3, "cherry",[4,5,6],[7,8,9],[10,11,12],['Man1','man2','man3']] #nested list

for items in listOfMixedItesm:
    print(items)