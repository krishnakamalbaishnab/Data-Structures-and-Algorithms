# TODO: Finding duplicates in a string using hashtables (dictionaries in Python)

def main():
    # Input string
    string = "finding"
    
    # Create a hash table (dictionary) to store character counts
    char_count = {}
    
    # Count occurrences of each character
    for char in string:
        # If character exists in dictionary, increment count
        if char in char_count:
            char_count[char] += 1
        else:
            # If character doesn't exist, initialize with count 1
            char_count[char] = 1
    
    # Print characters that appear more than once
    print("Duplicate characters:")
    for char, count in char_count.items():
        if count > 1:
            print(f"{char} {count}")

# Alternative implementation using collections.Counter
from collections import Counter

def main_alternative():
    # Input string
    string = "finding"
    
    # Count character occurrences using Counter
    char_count = Counter(string)
    
    # Print characters that appear more than once
    print("Duplicate characters:")
    for char, count in char_count.items():
        if count > 1:
            print(f"{char} {count}")

# Alternative implementation using defaultdict (similar to C++ approach)
from collections import defaultdict

def main_array_like():
    # Input string
    string = "finding"
    
    # Create a hash table similar to C++ array approach
    # Using defaultdict to automatically initialize to 0
    char_count = defaultdict(int)
    
    # Count occurrences of each character
    for char in string:
        char_count[char] += 1
    
    # Print characters that appear more than once
    print("Duplicate characters:")
    for char, count in char_count.items():
        if count > 1:
            print(f"{char} {count}")

if __name__ == "__main__":
    print("Method 1 - Basic dictionary:")
    main()
    
    print("\nMethod 2 - Using Counter:")
    main_alternative()
    
    print("\nMethod 3 - Using defaultdict:")
    main_array_like()