#include<iostream>
using namespace std;



int main()
{
    /* code */

    int number;
    
    

    cout<<"Enter the number :"<<endl;
    cin>>number;


    if (cin.fail())

    {
        cout<<"Enter a valid number!"<<endl;
        return 1;
    }
    

    if (number<0)
    {
        /* code */
        cout<<"The Number is negative!"<<endl;
    }
    else if (number == 0)
    {
        /* code */
        cout<<"The number is 0!"<<endl;
    }
    else{
        cout<<"The number is positive" <<endl;
    }
    return 0;
}
