#conditional List comprehension

# list1 = [1,2,3,4,5,6,7,8,9,10]

# list2 = [number for number in list1 if number % 2 == 0]

# print(list2)

# list3 = [-1 , 10, -20, 2, -90, 60,45, 20]

# list4 = [number*number for number in list3 if number < 0]

# print(list4)

# Finding alohabet from a number

# sentence = 'My name is Krishna Kamal Baishnab'

# def is_consonant(letter):
#     vowels ='aeiou'
#     return letter.isalpha() and letter.lower() not in vowels

# consonant = [i for i in sentence if is_consonant(i)]
# print(consonant)



# conditional list comprehenssion

# list6 = [-10,-20,2,-90,60,45,20]

# tempList = [number*number for number in list6 if number < 0]

# print(tempList)


# replacing negative number with something else in a list

list10 = [-10,20,-45,23,25,-70]

# replaceList = [number if number > 0 else 0 for number in list10]  #the negativ number is replaceed with 0
 
# print(replaceList)

# now let's do it by defining a functions

def get_number(number):
    return number if number > 0 else 'Negative Number'

    # #let's break down the if statement above

    # if number > 0:
    #     return number
    # else:
    #     return 'Negative number'

replaceList = [get_number(number) for number in list10]
print(replaceList)

