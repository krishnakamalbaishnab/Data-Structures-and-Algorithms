#function to find the sum of a array that contains integers and then find the average of the array


import array

def findAvg(arr):
	sum_ofArray = 0

	for i in range(len(arr)):
		sum_ofArray = sum_ofArray +arr[i]
		avg = sum_ofArray/len(arr)

	return avg



array1 = array.array('i', [1,2,3,5,7,4,6])

print(findAvg(array1))


