


string = "welcome to the jungle"
vowels = "aeiouAEIOU"
found_vowels = []

for char in string:
    if char in vowels:
        found_vowels.append(char)

print("Vowels in the string:", found_vowels)



string = "welcome to the jungle"
vowels = "aeiouAEIOU"

found_vowels = [char for char in string if char in vowels]
print("Vowels in the string:", found_vowels)



string = "welcome to the jungle"
vowels = "aeiouAEIOU"
distinct_vowels = set()

for char in string:
    if char in vowels:
        distinct_vowels.add(char)

print("Distinct vowels in the string:", distinct_vowels)
