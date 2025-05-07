A= [1,4,6,7,9,10]

print("Array before inserting element : ",A)

X = 2 # the value that we need to insert into the array

A.append(0) # appending dummy value to make space

i = len(A)-2


#shift elements to the right before finding the right spot to insert

while i>=0 and A[i]>X:
    A[i+1] = A[i]
    i -=1

A[i+1] = X

print("After inserting element into array",A)