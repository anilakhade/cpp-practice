// Remove duplicates from sorted array

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> RemoveDuplicates(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> sort_arr(n);
    //sort the array
    sort(arr.begin(), arr.end());
    
    // Remove duplicates
    for (int i = 0; i < n; ++i) {
        if (arr[i] != arr[i - 1]) {
            sort_arr[i] = arr[i];
        }
    }
    return sort_arr;
}

int main() {
    std::vector<int> arr = {5,3,4,1,4,2,8,8};
    std::vector<int> new_arr = RemoveDuplicates(arr);
    for (int x : new_arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}