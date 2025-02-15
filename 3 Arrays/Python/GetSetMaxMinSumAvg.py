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


