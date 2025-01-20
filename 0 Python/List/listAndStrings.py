myString = "Hello"

#we can convert this strng to a list of characters

listfromString = list(myString) #what this line of code will do is that  it will convert the string to a list of characters

print(listfromString) 


#supposer we have multiple strings and we want to convert them to a list of characters

string1 = "Hello World"



print(list(string1)) #this will give an error because we have not defined the variable list2

#we can use the split the string to convert it to a list of characters

list2 = string1.split() #this will split the string at the spaces and convert it to a list of characters

print(list2) #this will print ['Hello', 'World']