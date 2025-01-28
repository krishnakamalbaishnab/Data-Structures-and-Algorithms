# Function `fun1` performs a recursive countdown and prints numbers in decreasing order.

def fun1(n):
    if n > 0:  # Base case: If n is greater than 0, continue recursion.
        print(n)  # Print the current value of n.
        fun1(n - 1)  # Recursively call fun1 with (n-1).

# Call fun1 with n=3
fun1(3)  # Output: 3 2 1


# Function `fun2` performs a recursive count-up and prints numbers in increasing order.

def fun2(n):
    if n > 0:  # Base case: If n is greater than 0, continue recursion.
        fun2(n - 1)  # Recursively call fun2 with (n-1) first.
        print(n)  # Print the current value of n after the recursive call.

# Call fun2 with n=3
fun2(3)  # Output: 1 2 3
