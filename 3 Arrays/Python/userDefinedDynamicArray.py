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



##TODO: nly function based


def create_array(size):
    length = int(input("Enter the number of elements: "))
    
    if length > size:
        print("Error: Length cannot exceed size!")
        return [], 0  # Return empty array and 0 length
    
    arr = []
    print("Enter the array elements:")
    for i in range(length):
        arr.append(int(input(f"Array element [{i}] = ")))

    return arr, length


def display_array(arr, length):
    if length == 0:
        print("Array is empty.")
    else:
        print("Array elements:", " ".join(map(str, arr)))


if __name__ == "__main__":
    size = 10  # Maximum size of the array
    arr, length = create_array(size)  # Create array and get length
    display_array(arr, length)  # Display elements


