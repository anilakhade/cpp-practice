// Reverse array in place

#include <iostream>
#include <vector>

using ll = long long;

void ReversArrayInPlace(std::vector<ll>& v) {

    ll n = v.size();
    if (n < 2) { return; }

    ll left = 0;
    ll right = n - 1;

    while (left < right) {
        std::swap(v[left], v[right]);
        ++left;
        --right;
    }
}


int main() {

    std::vector<ll> v = {1,2,3,4,5,6,7,8,9,0,-1,-2};
    std::vector<ll> v1 = {};
    
    ReversArrayInPlace(v1);

    for (ll x : v1) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}