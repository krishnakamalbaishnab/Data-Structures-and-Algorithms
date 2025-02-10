class Array:
    def __init__(self,size):
        self.size = size
        self.length=0
        self.A=[0]*size #initialise with default values

    def create(self):
        self.length=int(input("Enter the number of elements: "))
        if self.length > self.size:
            print("Error: Length can not exceed size!")
            return
        print("Enter the array elements:")
        for i in range(self.length):
            self.A[i]=int(input(f"Array elements [{i}] = "))



    def display(self):
        print("Array elements: ", " ".join(map(str,self.A[:self.length])))

if __name__ == "__main__":
    arr = Array(10)
    arr.create()
    arr.display()