#compare two strings

#1 Using == operator

# ✅ Best for exact matches (case-sensitive).

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



# ✅ Best for sorting, string ordering, or dictionary comparisons.


def compare_strings_lexicographically(s1, s2):
    if s1 > s2:
        return f'"{s1}" is greater than "{s2}"'
    elif s1 < s2:
        return f'"{s1}" is smaller than "{s2}"'
    else:
        return "Strings are equal"

# Test Cases
print(compare_strings_lexicographically("apple", "banana"))  # Output: "apple" is smaller than "banana"
print(compare_strings_lexicographically("zebra", "lion"))  # Output: "zebra" is greater than "lion"
print(compare_strings_lexicographically("hello", "hello"))  # Output: Strings are equal





#3 Method 3: Using Manual ASCII Comparison (Like strcmp() in C++)


# ✅ Best if we want a manual comparison like strcmp() in C++

def compare_strings_ascii(s1, s2):
    min_length = min(len(s1), len(s2))
    
    for i in range(min_length):
        if ord(s1[i]) > ord(s2[i]):
            return f'"{s1}" is greater than "{s2}"'
        elif ord(s1[i]) < ord(s2[i]):
            return f'"{s1}" is smaller than "{s2}"'

    if len(s1) > len(s2):
        return f'"{s1}" is greater than "{s2}"'
    elif len(s1) < len(s2):
        return f'"{s1}" is smaller than "{s2}"'
    else:
        return "Strings are equal"

# Test Cases
print(compare_strings_ascii("hello", "hella"))  # Output: "hello" is greater than "hella"
print(compare_strings_ascii("cat", "cats"))  # Output: "cat" is smaller than "cats"
print(compare_strings_ascii("data", "data"))  # Output: Strings are equal








# 🔹 Summary Table
# Method			Use Case									Complexity

# ==				Exact match										O(n)
# <, >				Lexicographical order							O(n)
# ASCII (ord)		Manual character-wise comparison				O(n)























