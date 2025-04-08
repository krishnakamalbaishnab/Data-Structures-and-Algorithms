
# ✅ Basic Linked List Implementation



# Node class
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Linked List class
class LinkedList:
    def __init__(self):
        self.head = None  # Start of the list

    # Method to add a new node at the end
    def append(self, data):
        new_node = Node(data)
        if self.head is None:  # List is empty
            self.head = new_node
        else:
            current = self.head
            while current.next:  # Traverse to the end
                current = current.next
            current.next = new_node

    # Method to print the list
    def print_list(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")


# Create a LinkedList
ll = LinkedList()
ll.append(10)
ll.append(20)
ll.append(30)

ll.print_list()
