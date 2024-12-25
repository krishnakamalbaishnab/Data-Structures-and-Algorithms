
def missing_number(arr, n):
    total = n * (n+1)//2
    
    sumArr = sum(arr)
    
    missing = total - sumArr
    
    return missing
    
print(missing_number([1,2,3,4,5,7],7))