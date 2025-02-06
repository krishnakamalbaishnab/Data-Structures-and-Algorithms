#global varibale in recursion

def function(n):
    if n>0:
        return function(n-1)+n
    return 0

def main():
    x=print(function(5))

if __name__ == "__main__":
    main()


    
#static variable in recursion







def function(n, x=[0]):
    if n > 0:
        x[0] += 1
        return function(n - 1) + x[0]
    return 0

def main():
    print(function(5))

if __name__ == "__main__":
    main()
