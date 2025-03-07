def reverseString(s):
	length = len(s)


	reverse_string = ""


	for i in range(length -1,-1,-1):
		reverse_string += s[i]

	return reverse_string



string = "krishna"

print("The reverse string is:", (reverseString(string)))