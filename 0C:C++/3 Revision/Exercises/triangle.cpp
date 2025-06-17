#include<iostream>
using namespace std;

int main(){

    double angle1, angle2, angle3, sum;

    cout<<"Enter the first angle : "<<endl;
    cin>>angle1;
    cout<<"Enter the first angle : "<<endl;
    cin>>angle2;
    cout<<"Enter the first angle : "<<endl;
    cin>>angle3;

    sum = angle1+angle2+angle3;

    if (sum==180)
    {
        /* code */
        cout<<"It's a triangle"<<endl;
    }
    else{
        cout<<"Not triangle!"<<endl;
    }
    
return 0;

}