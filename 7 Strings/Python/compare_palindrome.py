#compare two strings

#1 Using == operator

def compare_string(str1, str2):
	if str1 == str2:
		return "Strings are equal"
	else:
		return "Strings are not equal"


print(compare_string("krishna", "baishnab"))  #not equal
print(compare_string("KRISHNA", "krishna")) #not euqal 
print(compare_string("krishna", "krishna")) # euqal 