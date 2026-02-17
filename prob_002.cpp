#include <iostream>
#include <vector>

using ll = long long;

int CountOddNumbers(const std::vector<ll>& v) {
    ll count = 0;
    
    for(ll x : v) {
        if (x % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<ll> v = {12,8,4,8,5,-7,3,4,-5,5,6,-2,7,0,8,0,9};
    ll count = CountOddNumbers(v);    
    std::cout << count << std::endl;

    return 0;
}