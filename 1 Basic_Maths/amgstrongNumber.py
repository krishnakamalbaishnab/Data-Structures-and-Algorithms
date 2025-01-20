                            
# Function to check if a
# number is an Armstrong number
def isArmstrong(num):
    # Calculate the number of
    # digits in the given number
    k = len(str(num))
    # Initialize the sum of digits
    # raised to the power of k to 0
    sum = 0
    # Copy the value of the input
    # number to a temporary variable n
    n = num
    # Iterate through each
    # digit of the number
    while n > 0:
        # Extract the last
        # digit of the number
        ld = n % 10
        # Add the digit raised to
        # the power of k to the sum
        sum += ld ** k #sum = sum + ld to the power 3
        # Remove the last digit
        # from the number
        n = n // 10
    # Check if the sum of digits raised to
    # the power of k equals the original number
    return sum == num

def main():
    number = 153
    if isArmstrong(number):
        print(number, "is an Armstrong number.")
    else:
        print(number, "is not an Armstrong number.")

if __name__ == "__main__":
    main()
                           
                        