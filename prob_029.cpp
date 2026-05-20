// move all zeros at the end

#include <iostream>
#include <vector>

void MoveAllZerosToEnd(std::vector<int>& v) {
    int left = 0;
    int right = v.size() - 1;

    while(left < right) {
        if (v[left] != 0) {
            ++left;
        } else {
            std::swap(v[left], v[right]);
            --right;
        }
    }
}

int main() {
    std::vector<int> v = {1,0,2,0,-3,0};
    MoveAllZerosToEnd(v);
    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}