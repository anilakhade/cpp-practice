// Count frequency of k

#include <iostream>
#include <vector>

using ll = long long;

ll CountFrequencyOfK(const std::vector<ll>& v, ll k) {
    ll count = 0;
    
    for (ll x : v) {
        if (x == k) {
            ++count;
        }
    }
    return count;
}

int main() {

    std::vector<ll> v = {8,4,5,9,5,9,8,5,2,0};
    ll k = 5;

    ll count = CountFrequencyOfK(v, k);
    std::cout << count << std::endl;

    return 0;
}