import array as arr

myNumArray = arr.array('i', [1,2,3,4,5])

print(myNumArray)

myNumArray.insert(0,7) # inserting 7 at the 0th index.

print(myNumArray)

#so when we insert an element at a particular index, the elements after that index are shifted to the right.

#inserting 6 at the 3rd index.

myNumArray.insert(3,6)

print(myNumArray)

# the time complexity of the insert operation is O(n) because the elements after the index where we are inserting the element are shifted to the right.

# the space complexity of the insert operation is O(1) because we are not using any extra space to insert the element.  We are just shifting the elements to the right.