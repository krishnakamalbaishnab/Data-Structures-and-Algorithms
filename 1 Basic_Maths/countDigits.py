#Given a number N find out and return the number of digits present in N
def count(n):
    cnt = 0
    while n>0:
        #lastdigit = n%10
        cnt += 1
        n = n//10
    return cnt

print(count(7789))






#without extraction of digits

# def count(n):
#     cnt = 0
#     while n > 0:
#         cnt = cnt + 1
#         n = n // 10  # Use floor division to get an integer result
#     return cnt  # Return the count of digits

# print(count(7789))  # This should output 4
