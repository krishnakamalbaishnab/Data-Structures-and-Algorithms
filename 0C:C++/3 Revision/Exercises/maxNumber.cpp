#include<iostream>

using namespace std;

int main(){

    int number1, number2;
    cout<<"Enter the first number: "<<endl;
    cin>>number1;

    cout<<"Enter the second number: "<<endl;
    cin>>number2;

    if (number1>number2)
    {
        cout<<"The number1"<<number1<<"is greater"<<endl;

    }

    else if (number1==number2)

    {
        /* code */
        cout<<"Both the numbers are equal"<<endl;
    }

else{
    cout<<"The number"<<number2<<"  greater"<<endl;
}
return 0;
}
