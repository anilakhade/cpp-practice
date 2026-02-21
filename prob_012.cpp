// Left shift array by 1

#include <iostream>
#include <vector>

void LeftShiftArrayByOne(std::vector<int>& v) {
    int n = v.size();
    if (n < 2) return;

    int i = 0;
    int temp = v[i];
    for (i = 0; i < n - 1; ++i) {
        v[i] = v[i + 1];
    }
    v[n - 1] = temp;
}


int main() {
    std::vector<int> v = {0,1,2,3,4,5,-2,-4};
    LeftShiftArrayByOne(v);

    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    

    return 0;
}
