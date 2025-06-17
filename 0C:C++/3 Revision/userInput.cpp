#include<iostream>
using namespace std;

int number1 = 45;


int main()

{
    /* code */

    int number1, number2, sum;

    cout<<"Enter your first number : \n" ;   // cout is a insertion operator
    cin>>number1; //cin is a extraction operator

    cout<<"Enter the second number : \n"; 
    cin>>number2;

    sum = number1 + number2;

    cout<<"The sum of the two number is :\n "<<sum<<"\n";

    //accessing global variable

    cout<<"The global variable is : "<<::number1; // :: scope resolution operator , accessing global variable



    return 0;
}

