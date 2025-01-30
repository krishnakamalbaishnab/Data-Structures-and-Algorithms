def function(n):
    if n>0:
        return function(n-1)+n
    return 0

def main():
    x=print(function(5))

if __name__ == "__main__":
    main()


    
    