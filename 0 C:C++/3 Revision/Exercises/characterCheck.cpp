#include<iostream>

using namespace std;

int main(){

    char charArray[] = {'a', 'e', 'i', 'o', 'u'};
    int sizeofArray = sizeof(charArray)/sizeof(charArray[0]);

    char userInput;
    cout<<"Enter the character : "<<endl;
    cin>>userInput;

    // bool found = false;

    for(int i=0;i<sizeofArray; ++i){
        if (charArray[i]==userInput){
            cout<<"The character is vowel"<<endl;
            return 0;
        }      
    }

         cout<<"The charcter is consonent"<<endl;
         return 0;
       

}