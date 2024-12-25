# Calculate the avegrage temperaturw

# ask the user how many days

numberOfDays = int(input("How many days's temperature? :"))
total = 0
temp = []

for i in range(numberOfDays+1):
    nextDay = int(input(str(i) + " Day's Highest Temmperatue? : "))
    temp.append(nextDay)
    total +=temp[i]

avg = round(total/numberOfDays,2)


above = 0
for i in temp:
    if i > avg:
        above  += 1


print("The average temp of " +str(numberOfDays) + " days is : " + str(avg))

print(str(above)  +  " days(s) above average")

