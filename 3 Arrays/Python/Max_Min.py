#function to find the maximum of a array
import array



def find_max(arr):

	max_value = array1[0]

	for i in range(len(array1)):
		if arr[i] > max_value:
			max_value = arr[i]

	return max_value


array1 = array.array('i', [1,2,6,4,7,9,10])

max_value  = find_max(array1)
print(max_value)


