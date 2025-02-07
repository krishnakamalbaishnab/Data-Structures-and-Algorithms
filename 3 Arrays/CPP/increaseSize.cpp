// Instead of resizing an array manually, use std::vector::push_back() to add elements to the end of the array.


#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3};
    arr.push_back(4);
    arr.push_back(5);

    for (int num : arr)
        std::cout << num << " ";  // Output: 1 2 3 4 5

    return 0;
}
