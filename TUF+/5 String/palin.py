def palindrome(s):
    left = 0
    right = len(s)-1

    while(left<right):

        if s[left] != s[right]:
            return False
        left +=1
        right -=1
    return True

name = "hanna"


if palindrome(name):
    print("Palindrome")
else:
    print("Not Palindrome")

    