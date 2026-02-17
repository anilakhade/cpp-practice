// copy array to another array

#include <iostream>
#include <vector>

using ll = long long;

std::vector<ll> CopyArray(const std::vector<ll>& v) {
    ll n = v.size();
    
    std::vector<ll> v1(n);
    
    for (ll i = 0; i < n; ++i) {
        v1[i] = v[i];
    }
    return v1;
}


int main() {

    std::vector<ll> v = {8,-4,5,-9,5,9,8,-5,20,8,4,8,3,-99,1,-6,0,3};
    std::vector<ll> copy = CopyArray(v);

    for (ll x : copy) {
        std::cout << x << " ";
    }

    return 0;
}