// Partition array: negative on left and positive on right

#include <iostream>
#include <vector>

void Partition(std::vector<int>& v) {
    int n = v.size();
    int left = 0;
    int right = n - 1;

    while (left < right) {
        if (v[left] < 0) {
            ++left;
        } else {
            std::swap(v[left], v[right]);
            --right;
        }
    }
}

int main() {
    std::vector<int> v = {1,2,3,0,-5,-4,-2};
    Partition(v);
    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}


