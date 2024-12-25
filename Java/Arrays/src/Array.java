public class Array {

    // Private members to store array elements and count of elements
    private int[] items;
    private int count; //the count variable is intended to keep track of the number of elements currently
    // present in the array. However, in the current implementation,
    // the count variable is not being updated anywhere in the code, so its value will always be zero.

    // Constructor to initialize the array with a given length
    public Array(int length) {
        items = new int[length];
    }
    //inserting items in array
    public void insert (int item){
        if (items.length == count){
            int[] newItems = new int[count * 2]; // declaring an new array so that it becomes dynamic and the size is twice the size of the items array
            //copying all the existing items
            for (int i = 0; i <count; i++)
                newItems[i]= items[i];
            //setting "items" to this new array
            items = newItems;
        }
        items[count++]= item; // storing it to the new items
    }

    //deleting an item from an array
    public void removeAt(int index){
        //validating the index
        if(index<0|| index>=count)
            throw new IllegalArgumentException();

        //shift the items to the left to fill the hole

        for(int i = index; i<count; i++)
            items[i] = items[i+1];

    count --;
    }

    //searching in a array index
    public int indexOf(int item){
        //if we find it return index
        for (int i =0; i< count; i++)
            if(items[i]== item)
                return i;
        //otherwise return -1
    return -1;
    }
    //Method to print the elements of the array
    public void print() {
        // Iterate through the array and print each element
        for (int i = 0; i < count; i++)
            System.out.println(items[i]);
    }
}
