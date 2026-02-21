// Replace all negative numbers with zero

#include <iostream>
#include <vector>

void ReplaceNegativesWithZero(std::vector<int>& v) {
    
    for (int& x : v) {
        if ( x < 0 ) {
            x = 0;
        }
    }
}

int main() {

    std::vector<int> v = {0,8,9,-7,0,6,-5,4,3,-2,6,-1,0};

    ReplaceNegativesWithZero(v);

    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;


    return 0;
}
