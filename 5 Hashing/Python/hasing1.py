n = int(input())
arr = list(map(int, input().split()))

# Initialize hash array of size 13 with all zeros
hash_map = [0] * 13

# Count occurrences
for num in arr:
    if 0 <= num < 13:  # Ensure the number is within bounds
        hash_map[num] += 1

q = int(input())

# Answer queries
for _ in range(q):
    number = int(input())
    if 0 <= number < 13:  # Ensure the number is within bounds
        print(hash_map[number])
    else:
        print(0)
