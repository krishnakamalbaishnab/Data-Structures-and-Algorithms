//
//  main.cpp
//  get_started
//
//  Created by lco on 19/04/20.
//  Copyright © 2020 lco. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int integer_array[4] = {1, 2, 3, 4};
    cout << integer_array[0] << endl;
    
    
    int another_array[4];
    another_array[0] = 9;
    another_array[1] = 19;
    
    cout << another_array[0] << endl;
    
    *another_array = 29;
    cout << another_array[0] << endl;
    
    
    cout << another_array[1] << endl;
    int *ap = another_array;
    ap++;
    *ap = 209;
    cout << another_array[1] << endl;
    
    
    
    return 0;
}
