//
//  main.cpp
//  practice codes
//
//  Created by krishnakamalbaishnab on 04/04/2023.
//

//my sirg area of a circle

//#include <iostream>

//using namespace std;
//int main(){
   // int radius;
    //float area = 0;
    //cout<<"Please Enter the radius of the circle: \n";
    //cin>>radius;
    //area = 3.14 * radius * radius;
    //cout<<"The area of the circle is : " <<area<< "\n";
    //return 0;
//}


//average of three numbers

//#include <iostream>
//using namespace std;
//
//int main(){
//    int number1, number2, number3;
//    float sum, average;
//    cout<<"Enter the First Number : \n";
//    cin>>number1;
//    cout<<"Enter the Second Number : \n";
//    cin>>number2;
//    cout<<"Enter the Third Number : \n";
//    cin>>number3;
//
//    sum = (number1 + number2 + number3);
//    average = (sum / 3);
//    cout<<"The average of the numbers : " <<number1<< " , " <<number2<<  " and " <<number3<< " is : " <<average<< "\n";
//}


//simple interest

//#include <iostream>
//using namespace std;
//
//int main(){
//    float principal_amount, final_amount, rate_of_interest, time_in_years;
//    cout<<"Enter the Principal Amount : \n";
//    cin>>principal_amount;
//    cout<<"Enter the Rate of Interest : \n";
//    cin>>rate_of_interest;
//    cout<<"Enter the Time Period in years : \n";
//    cin>>time_in_years;
//    final_amount=(principal_amount * (1+((rate_of_interest/100)*time_in_years)));
//    cout<<"The final amount of the customer is : " <<final_amount<< "\n";
//    return 0;
//}


//Write a CPP program to check whether a given number is even or odd

//#include <iostream>
//using namespace std;
//
//int main(){
//    int number;
//    cout<<"Enter the number : ";
//    cin>>number;
//    if (number %2 ==0) {
//        cout<<"The number "<<number<< " is even number \n";
//    }
//    else {
//        cout<<"The number " <<number<< " is not even. \n";
//    }
//
//}



//Write a CPP program to find greater between two numbers

//#include "iostream"
//using namespace std;
//
//int main(){
//    int number1, number2;
//    cout<<"Enter the first number: \n";
//    cin>>number1;
//    cout<<"Enter the second number: \n";
//    cin>>number2;
//
//    if (number1 > number2) {
//        cout<< number1<< " is greater \n";
//
//    } else {
//        cout<< number2 << " is greater \n";
//    }
//}


//Write a CPP program to find greater between three numbers

//#include "iostream"
//using namespace std;
//
//int main(){
//    int number1, number2, number3;
//    cout<<"Enter the first number: \n";
//    cin>>number1;
//    cout<<"Enter the second number: \n";
//    cin>>number2;
//    cout<<"Enter the third number: \n";
//    cin>>number3;
//
//    if (number1 >=  number2 && number1>= number3) {
//        cout<< number1<< " is greater \n";
//
//    } else if (number2 >= number1 && number2>= number3){
//
//        cout<< number2 << " is greater \n";
//    }
//    else {
//        cout<<number3 << " is greatest \n";
//    }
//    return 0;
//}


//leap year

//#include <iostream>
//using namespace std;
//
//int main() {
//    int year;
//    cout << "Enter a year: ";
//    cin >> year;
//    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//        cout << year << " is a leap year.\n";
//    } else {
//        cout << year << " is not a leap year.\n";
//    }
//    return 0;
//}
//
//sum of N natural numbers

//#include <iostream>
//using namespace std;
//
//int main(){
//    int N;
//    cout<<"Enter the number : " <<endl;
//    cin>>N;
//
//    int sum = 0;
//    for (int i = 1; i<=N; ++i) {
//        sum +=i;
//
//    }
//
//    cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;
//}


//factorial

#include <iostream>
using namespace std;

int main() {
    int number;
    unsigned long long fact = 1;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    for (int i = 1; i <= number; ++i) {
        fact *= i;
    }

    cout << "The factorial of " << number << " is: " << fact << endl;

    return 0;
}

