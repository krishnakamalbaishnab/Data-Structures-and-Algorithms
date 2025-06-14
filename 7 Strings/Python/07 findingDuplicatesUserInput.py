def find_duplicates(input_string):
    # TODO: """Find and print duplicate characters in a string using array-like approach"""
    # Create a hash table (list) of size 26 for lowercase letters a-z
    # Initialize all values to 0
    H = [0] * 26
    
    # Count occurrences of each lowercase character
    for ch in input_string:
        if 'a' <= ch <= 'z':  # Only count lowercase letters
            H[ord(ch) - ord('a')] += 1
    
    # Check for duplicates and print them
    found = False
    for i in range(26):
        if H[i] > 1:
            print(f"{chr(i + ord('a'))} {H[i]}")
            found = True
    
    if not found:
        print("No duplicates found.")

def main():
    # Test with predefined string
    test = "finding"
    print("Duplicates in 'finding':")
    find_duplicates(test)
    
    # Get user input
    user_input = input("\nEnter a lowercase string: ")
    
    print("Duplicates in your input:")
    find_duplicates(user_input)

if __name__ == "__main__":
    main()