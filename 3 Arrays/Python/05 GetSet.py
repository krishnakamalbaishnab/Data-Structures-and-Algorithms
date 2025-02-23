#get methods


#get(index) -- which returns the element of the specific index

import array


def getElement(array, index):
	if index>=0 and index<=len(array):
		return array[index]
	else:
		return IndexError("Index out of range!")




array1 = array.array('i', [1, 2, 3, 9, 6, 4, 3, 11, 10])

print(getElement(array1,4))



##set method

def setElements(array, index, element):
	if index>0 and index<len(array):
		array[index] = element
		return array
		return IndexError("Index out of range!")


array1 = array.array('i', [1, 2, 3, 9, 6, 4, 3, 11, 10])

print(array1)

# print(getElement(array1,4, 99))


print(setElements(array1,4,99))
# print(array1)
























