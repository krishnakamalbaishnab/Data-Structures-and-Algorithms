//
//  main.cpp
//  harrytut
//
//  Created by krishnakamalbaishnab on 06/06/2023.
//

//#include <iostream>
//using namespace std;
//
//int main() {
//    // insert code here...
//    int num1, num2;
//    cin>>num1;
//    cin>>num2;
//    cout<<"the sum is: "<< num1+num2;
//    return 0;
//}


//#include<iostream>
//
//using namespace std;
//
//int main(){
//    // cout<<"This is tutorial 9";
//    int age;
//    cout<< "Tell me your age"<<endl;
//    cin>>age;
//
//    // 1. Selection control structure: If else-if else ladder
//    // if((age<18) && (age>0)){
//    //     cout<<"You can not come to my party"<<endl;
//    // }
//    // else if(age==18){
//    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
//    // }
//    // else if(age<1){
//    //     cout<<"You are not yet born"<<endl;
//    // }
//    // else{
//    //     cout<<"You can come to the party"<<endl;
//    // }
//
//    // 2. Selection control structure: Switch Case statements
//    switch (age)
//    {
//    case 18:
//        cout<<"You are 18"<<endl;
//        break;
//    case 22:
//        cout<<"You are 22"<<endl;
//        break;
//    case 2:
//        cout<<"You are 2"<<endl;
//        break;
//
//    default:
//    cout<<"No special cases"<<endl;
//        break;
//    }
//
//    cout<<"Done with switch case"<<endl;
//    return 0;
//}

/*Multiplication table of 6*/
//#include <iostream>
//using namespace std;
//
//int main(){
//    int num;
//    cout<<"Enter the number for printing the multiplication table: "<<endl;
//    cin>>num;
//    cout<<"Multiplication Table of " << num << ":" <<endl;
//    for (int i =1; i<=10; i++){
//        cout<< num << " * " << i << " = " << num * i <<endl;
//
//
//
//    }
//
//    return 0;
//}

/*Loops in Cpp*/

//#include <iostream>
//
//using namespace std;
//int main()
//{
//    /*Loops in C++:
//    There are three types of loops in C++:
//        1. For loop
//        2. While Loop
//        3. do-While Loop
//    */
//
//    /*For loop in C++*/
//    // int i=1;
//    // cout<<i;
//    // i++;
//
//    // Syntax for for loop
//    // for(initialization; condition; updation)
//    // {
//    //     loop body(C++ code);
//    // }
//
//    // for (int i = 1; i <= 40; i++)
//    // {
//    //     /* code */
//    //     cout<<i<<endl;
//    // }
//
//    // Example of infinite for loop
//    // for (int i = 1; 34 <= 40; i++)
//    // {
//    //     /* code */
//    //     cout<<i<<endl;
//    // }
//
//    /*While loop in C++*/
//    // Syntax:
//    // while(condition)
//    // {
//    //     C++ statements;
//    // }
//
//    //  Printing 1 to 40 using while loop
//    // int i=1;
//    // while(i<=40){
//    //     cout<<i<<endl;
//    //     i++;
//    // }
//
//    // Example of infinite while loop
//    // int i = 1;
//    // while (true)
//    // {
//    //     cout << i << endl;
//    //     i++;
//    // }
//
//    /* do While loop in C++*/
//        // Syntax:
//        // do
//        // {
//        //     C++ statements;
//        // }while(condition);
//
//    //  Printing 1 to 40 using while loop
//    // int i=1;
//    // do{
//    //     cout<<i<<endl;
//    //     i++;
//    // }while(false);
//
//    return 0;
//}
//



//#include <iostream>
//using namespace std;
//int main(){
//    int num;
//    cout<<"Enter the number: "<<endl;
//    cin>>num;
//
//    int sum = 0;
//    for (int i=0; i<=num; i++)
//        sum += i;
//    cout << "The sum of the first " << num << " natural numbers is: " << sum << endl;
//
//    return 0;
//
//}



//#include <iostream>
//#include <random>
//
//int main() {
//    // Create a random number generator engine
//    std::random_device rd;
//    std::mt19937 gen(rd());
//
//    // Define the range of random numbers
//    int minNum = 1;
//    int maxNum = 100;
//
//    // Create a distribution
//    std::uniform_int_distribution<int> distribution(minNum, maxNum);
//
//    // Generate a random number
//    int randomNumber = distribution(gen);
//
//    // Output the random number
//    std::cout << "Random number: " << randomNumber << std::endl;
//
//    return 0;
//}
