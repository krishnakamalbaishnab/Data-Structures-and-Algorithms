def divisor(num):
    # Loop over each number from 1 to num (inclusive)
    for i in range(1, num + 1):
        # Check if num is divisible by i
        if num % i == 0:
            # If it is, print i (i is a divisor of num)
            print(i)

# Call the function with 36 to print all divisors of 36
divisor(36)
