
def max_product(array):
    # TODO
    maximum1, maximum2 = 0, 0
    
    for numbers in array:
        if numbers>maximum1:
            maximum2=maximum1
            maximum1=numbers
        elif numbers > maximum2:
                maximum2 = numbers
                
    return maximum1 * maximum2



sizeOfArray = int(input("Enter how many element to be stored in array: "))

arr =[]
for i in range(sizeOfArray):
    num = int(input(f"Enter the {i+1}th number: "))
    arr.append(num)

print(max_product(arr))
