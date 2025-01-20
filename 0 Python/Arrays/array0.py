# This is a simple example of how to create an array in python using the array module.

import array as arr
a = arr.array('d', [1.1, 3.5, 4.5])
print(a)

print (type(a))


# the above code is creating an array of float type and then printing the array and its type.

myArray =[] # creating an empty array then adding elements to it.

for i in range(5):
    myArray.append(i)

print(myArray)

# the above code is creating an array of int type and then printing the array and its type.

# The array module defines a sequence data type that looks very much like a list, except that all of the members have to be of the same type. The types supported are all numeric or other fixed-size primitive types such as bytes. The array type is mutable and behaves very much like lists except that the type of objects stored in them is constrained. The following table lists the letters used to specify the type of the array.

# Type code	C Type	Python Type	Minimum size in bytes

# 'b'	signed char	int	1
# 'B'	unsigned char	int	1
# 'u'	Py_UNICODE	Unicode character	2 (see note)
# 'h'	signed short	int	2
# 'H'	unsigned short	int	2
# 'i'	signed int	int	2
# 'I'	unsigned int	int	2
# 'l'	signed long	int	4
# 'L'	unsigned long	int	4
# 'q'	signed long long	int	8 (see note)
# 'Q'	unsigned long long	int	8 (see note)
# 'f'	float	float	4
# 'd'	double	float	8
# Note: The 'u' type code corresponds to Python’s unicode character. On narrow Unicode builds this is 2-bytes on wide builds this is 4-bytes.


#creating an array with numpy module


import numpy as np
myArray2 = np.array([1,2,3,4,5])

print(myArray2)

print(type(myArray2))

