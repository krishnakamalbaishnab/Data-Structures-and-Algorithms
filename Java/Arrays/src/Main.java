import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
//        int[] numbers  = new int [3]; // declaring an array with size 3
//        numbers[0] = 10;
//        numbers[1] = 20;
//        numbers[2] = 30;
//        //this lines of code is storing items to the array named "numbers" with the index value
//        System.out.println(Arrays.toString(numbers)); // Arrays is method in java from the package java.util
//        //what is line of code is doing is that , Arrays toString is converting the object to string and then printing o the console. It will print 0 , 0, 0
//        //now if we want to print or store different value to the arrays how we can do is that *GO TO LINE NUMBER 6*
//        // shorthand of declaring and initialising an array
//
//        int[]  numbers2 = {40,50,60}; //short syntax of declaring an array in Java
//        System.out.println(Arrays.toString(numbers2));
//
//        //printing the size of the array
//        System.out.println(numbers2.length);

        Array number = new Array(3);
        number.insert(100);
        number.insert(200);
        number.insert(300);
        number.insert(400);

        number.removeAt(3); //deleting array item from the index value of 3

        System.out.println(number.indexOf(300)); //printing the index of array items 300

        number.print();

    }
}