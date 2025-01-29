def function1(n):
    if n>0:
        print(n)
        function1(n-1)

def main():
    x = 3
    function1(x)


if __name__ == "__main__":
    main()