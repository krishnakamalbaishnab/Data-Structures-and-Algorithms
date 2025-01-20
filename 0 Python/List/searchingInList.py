myList = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
target = 5 
#target = int(input("Enter the element to be searched: ")) #taking the element to be searched as input from the user

#using in operator

# if target in myList:
#     print(f"Element found at index {myList.index(target)}")

# else:
#     print("Element not found")


#leinear Search

# def linearSearch(list, traget):
#     for i, value in enumerate(list):
#         if value == target:
#             return i
#         return "Not Found"

# print(linearSearch(myList, target))






userInputList = []

numberOfElements = int(input("Enter the number of elements in the list: "))

for i in range(numberOfElements):
    userInputList.append(int(input(f"Enter the {i+1}{'st' if i==0 else 'nd' if i==1 else 'th'} number: ")))

avg = sum(userInputList) / len(userInputList)

print(f"Average of the list is: {avg}")
