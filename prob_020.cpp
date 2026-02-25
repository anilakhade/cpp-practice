// Range sum query using prefix sum

#include <iostream>
#include <vector>

using ll = long long;

std::vector<ll> PrefixSumArray(const std::vector<ll>& arr) {
    ll n = arr.size();
    std::vector<ll> sum_array(n);

    if (n == 0) return sum_array;

    sum_array[0] = arr[0];

    for (ll i = 1; i < n; ++i) {
        sum_array[i] = sum_array[i - 1] + arr[i];
    }
    return sum_array;

}

ll RangeSum(const std::vector<ll>& arr, ll l, ll r) {
    std::vector<ll> pfs = PrefixSumArray(arr);
    if (l == 0) return pfs[r];
    return pfs[r] - pfs[l - 1]; 
} 

int main() {
    std::vector<ll> v = {1,2,3,0,-1,-2,5};
    std::cout << RangeSum(v, 0, 2) << std::endl;
    std::cout << RangeSum(v, 1, 3) << std::endl;   
    std::cout << RangeSum(v, 2, 6) << std::endl;
    std::cout << RangeSum(v, -1, 3) << std::endl;
    std::cout << RangeSum(v, 0, 4) << std::endl;
    std::cout << RangeSum(v, 1, 7) << std::endl;
    return 0;
}