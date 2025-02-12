import array

arr1 = array.array('i',[1,2,3,5,6,7,8,9,10])

print(list(arr1))

#search element 5 i the array
key = 7

for i in range(len(arr1)):
	if key == arr1[i]:
		print ("The element found at index : ", i)
	else:
	print("Element not found!")






import array

arr1 = array.array('i', [1, 2, 3, 5, 6, 7, 8, 9, 10])

print(list(arr1))

# Search element in the array
key = 11
found = False  # Flag to track if element is found

for i in range(len(arr1)):
    if key == arr1[i]:
        print("The element found at index:", i)
        found = True
        break  # Exit loop when found

if not found:  # Only print once, after loop
    print("Element not found!")
