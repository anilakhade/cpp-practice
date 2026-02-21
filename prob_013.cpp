// Right shift array by 1

#include <iostream>
#include <vector>

void ShiftRightByOne(std::vector<int>& v) {
    int n = v.size();
    if (n < 2) return;
    int i = n - 1;
    int temp = v[i];

    for (i = n - 1; i > 0; --i) {
        v[i] = v[i - 1];
    }
    v[0] = temp;
}


int main() {
    std::vector<int> v = {1,5,9,4,8,6,7,5,3,0,-6};
    ShiftRightByOne(v);

    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
