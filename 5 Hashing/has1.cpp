// #include<iostream>


// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin >> arr[i];
//     }

//     int hash[13] = {0};
//     for(int i =0;i<n;i++){
//     hash[arr[i]] +=1;
//     }

//     int q;

//     cin >> q;
//     while(q--){
//         int number ;
//         cin>>number;
//         cout << hash[number] <<endl;
//     }
// }





#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;

    while (q--) {
        int number;
        cin >> number;

        if (number >= 0 && number < 13) {  // Ensure number is within the hash array bounds
            cout << hash[number] << endl;
        } else {
            cout << "0" << endl;  // Output 0 if the number is out of bounds
        }
    }

    return 0;
}
