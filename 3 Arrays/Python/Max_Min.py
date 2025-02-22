#function to find the maximum of a array


import array


def find_max(arr):

	max_value = arr[0]

	for i in range(len(arr)):
		if arr[i] > max_value:
			max_value = arr[i]

	return max_value





#function to find the minimum in a array



def find_min(arr):
	min_value = arr[0]

	for i in range(len(arr)):
		if arr[i] < min_value:
			min_value = aar[i]

	return min_value





array1 = array.array('i', [1,2,6,4,7,9,10])


max_value  = find_max(array1)
min_value = find_min(array1)

print(min_value)
print(max_value)
