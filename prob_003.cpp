// CHECK IF ARRAY IS SORTED (NON DECREASING) 

#include <iostream>
#include <vector>

using ll = long long;

bool IsSorted(const std::vector<ll>& v) {
    if (v.size() == 0) {return true;}
    if (v.size() < 2) {return true;}
    for (size_t i = 0; i < v.size() - 1; ++i) {
        if (v[i] > v[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {

    std::vector<ll> v1 = {5,4,6,2,1,9,-3,-4,0};
    std::vector<ll> v2 = {1,2,3,4,5,6};
    std::vector<ll> v3 = {};
    std::vector<ll> v4 = {5};

    std::cout << IsSorted(v1) << std::endl; 
    std::cout << IsSorted(v2) << std::endl;
    std::cout << IsSorted(v3) << std::endl; 
    std::cout << IsSorted(v4) << std::endl; 

    return 0;
}