// check  if the arrya is sorted or not


#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements to be inserted in the array:"<<endl;
    cin>>n;

    int* array = new int[n];


    cout<<"Enter the elements to the array of size "<< n <<endl;

    for (int i = 0; i < n; i++){
        cout<<"Elements "<<i+1<<": ";
        cin>> array[i];
      }

    cout << "The created array is: ";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;


    bool isSorted = true;
    for (int i=1; i<n; i++){
        if (array[i] < array[i-1])
        {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    
    return 0;

}