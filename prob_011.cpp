// swap first and last elements

#include <iostream>
#include <vector>


void SwapFirstAndLastElement(std::vector<int>& v) {
    int n = v.size();
    if (n < 2) return;
    int temp = v[0];
    v[0] = v[n - 1];
    v[n - 1] = temp;
    
}

int main() {

    std::vector<int> v = {-7,4,6,5,9,1,6,1,7,8,9,0,5,6};
    
    SwapFirstAndLastElement(v);

    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;


    return 0;
}

