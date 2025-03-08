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





# In Python, strings are sequences of Unicode code points (characters). When you compare strings using the == operator, Python does the following:

# Character-by-character comparison: Python compares each character in the strings by their Unicode code points.
# ASCII/Unicode values: Each character has a numeric Unicode value. For example:

# 'K' has the Unicode value 75
# 'k' has the Unicode value 107


# Comparison process:

# First, Python checks if the lengths of both strings are equal
# If they are, it proceeds to compare each character's Unicode value in order
# The first difference found makes the comparison return False
# If no differences are found, the strings are equal



# So when comparing "KRISHNA" with "krishna":

# 'K' (75) != 'k' (107) → Immediately returns False

# When Python executes the line if str1 == str2:, it calls the string class's __eq__ special method internally, which implements this comparison logic.
# This is why uppercase and lowercase letters are considered different - they have completely different Unicode code point values. Python isn't doing any 
#semantic comparison; it's doing a strict binary/numeric comparison of the character values.
# You can verify the Unicode values yourself:
# pythonCopyprint(ord('K'))  # Output: 75
# print(ord('k'))  # Output: 107
# For strings of different lengths, Python would immediately return False after checking the length, without proceeding to character comparison.


#2 Using lexiographical operator

