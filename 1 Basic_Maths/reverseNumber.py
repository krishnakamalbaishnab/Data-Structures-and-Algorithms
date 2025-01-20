def reverse(x):
    reverseNumber = 0
    while x>0:
        lastDigit = x%10
        reverseNumber = (reverseNumber*10) + lastDigit
        x = x//10
    return reverseNumber


print(reverse(123))