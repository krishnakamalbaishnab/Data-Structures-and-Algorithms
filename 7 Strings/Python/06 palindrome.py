# 🔹 Method 1: Using String Slicing ([::-1]) ✅ (Pythonic & Efficient)

def is_palindrome(s):
    return s == s[::-1]  # Compare string with its reverse

# Test Cases
print(is_palindrome("madam"))  # Output: True
print(is_palindrome("hello"))  # Output: False


# ✅ Time Complexity: O(n) (string reversal)
# ✅ Space Complexity: O(n) (new reversed string)


# 🔹 Method 2: Using Two Pointers (Efficient - O(n), O(1) Space)

def is_palindrome(s):
    left, right = 0, len(s) - 1

    while left < right:
        if s[left] != s[right]:  # If mismatch, not a palindrome
            return False
        left += 1
        right -= 1  # Move pointers inward

    return True  # If loop completes, it's a palindrome

# Test Cases
print(is_palindrome("racecar"))  # Output: True
print(is_palindrome("python"))  # Output: False

# ✅ Time Complexity: O(n)
# ✅ Space Complexity: O(1) (no extra memory used)

# 🔹 Method 3: Ignoring Case & Non-Alphanumeric Characters
 
import re   #re regular expressions

def is_palindrome(s):
    s = re.sub(r'[^a-zA-Z0-9]', '', s).lower()  # Remove non-alphanumeric & convert to lowercase
    return s == s[::-1]

# Test Cases
print(is_palindrome("A man, a plan, a canal: Panama"))  # Output: True
print(is_palindrome("No lemon, no melon"))  # Output: True
print(is_palindrome("Hello"))  # Output: False


# ✅ Handles Spaces & Punctuation
# ✅ Case-Insensitive Comparison

