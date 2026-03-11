// Find second largest element

#include <iostream>
#include <vector>
#include <climits>

using ll = long long;

ll FindSecondLargest(const std::vector<ll>& arr) {
    if (arr.size() < 2) return -1;

    ll first = LLONG_MIN;
    ll second = LLONG_MIN;

    for (ll num : arr) {
        if (num > first) {
            second = first;
            first = num;
        } else if (num > second && num != first) {
            second = num;
        }
    }
    return second;
}


int main() {
    std::vector<ll> v = {-9,0,5,3,-2,3,7};
    ll a = FindSecondLargest(v);
    std::cout << a << std::endl;


    return 0;
}
