def findPairs(numbers,target):
    for i in range (len(numbers)):
        for j in range(i+1, len(numbers)):
            if numbers[i]==numbers[j]:
                continue
            elif numbers[i] + numbers[j] == target:
                print(i,j)

mylist = [1,2,3,4,5,6,7]

findPairs(mylist,6)
