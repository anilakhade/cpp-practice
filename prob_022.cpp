// Remove duplicates from sorted array

#include <iostream>
#include <vector>

std::vector<int> RemoveDuplicatesFromSortedArray(std::vector<int>& arr) {
    int n = arr.size();
    int k = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] != arr[k-1]){
            arr[k] = arr[i];
            k++;
        }
    }
    arr.resize(k);
    return arr;
}

int main() {
    std::vector<int> arr = {0,0,1,1,2,3,4,4,5,6,6,8,8};

    std::vector<int> r = RemoveDuplicatesFromSortedArray(arr);

    for (int x : r) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
