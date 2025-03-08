def is_valid_string(s):
    """
    A valid string contains only alphabets (A-Z, a-z) and digits (0-9).
    """
    for char in s:
        ascii_val = ord(char)
        if not (65 <= ascii_val <= 90 or 97 <= ascii_val <= 122 or 48 <= ascii_val <= 57):
            return False  # Invalid character found
    return True


# ✅ Test Cases
print(is_valid_string("Hello123"))  # True (Valid)
print(is_valid_string("Hello@123"))  # False (Contains '@')
print(is_valid_string("ValidStr"))  # True
print(is_valid_string("12345"))  # True





def is_valid_string(s):
    return all(char.isalpha() or char.isdigit() for char in s)


# ✅ Test Cases
print(is_valid_string("Hello123"))  # True
print(is_valid_string("Hello@123"))  # False
