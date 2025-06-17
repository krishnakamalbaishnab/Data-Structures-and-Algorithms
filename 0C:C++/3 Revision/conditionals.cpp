#include<iostream>
using namespace std;


int main()
{
    /* code */
    int age;
    cout<<"Enter your age :"<<endl;
    cin>>age;

    if (age<18)
    {
        /* code */
        cout<<"You can not come to my party!";
    }
    
    else if (age==18)
    {
        /* code */
        cout<<"You will get a kid pass to my party, but can not drink alcohol1"<<endl;
        
    }
    else{
        cout<<"You are welcome to my party!"<<endl;
    }
    


    return 0;
}
