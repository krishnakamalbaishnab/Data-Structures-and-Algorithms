# A list is a collection of items in a particular order. You can make a list that includes the letters of the alphabet, the digits from 0-9, or the names of all the people in your family. You can put anything you want into a list, and the items in your list don’t have to be related in any particular way. Because a list usually contains more than one element, it’s a good idea to make the name of your list plural, such as letters, digits, or names.

# In Python, square brackets ([]) indicate a list, and individual elements in the list are separated by commas. Here’s a simple example of a list that contains a few kinds of bicycles:

# bicycles = ['trek', 'cannondale', 'redline', 'specialized']

# Lists are ordered collections, so you can access any element in a list by telling Python the position, or index, of the item desired. To access an element in a list, write the name of the list followed by the index of the item enclosed in square brackets.

# For example, let’s pull out the first bicycle in the list bicycles:

# bicycles = ['trek', 'cannondale', 'redline', 'specialized']

# print(bicycles[0])

#let's see how to create a list in python

listOfIntegers = [1,2,3,4,5,6,7,8,9,10]

print(listOfIntegers)

listOfstrings = ["apple", "banana", "cherry", "date", "elderberry"]

print(listOfstrings)

MixedList = [1, "apple", 2, "banana", 3, "cherry"]

print(MixedList)

nestedList = [[1,2,3],[4,5,6],[7,8,9],[10,11,12],['Man1','man2','man3']] #nested list

print(nestedList)
