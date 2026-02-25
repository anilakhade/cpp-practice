// Build prefix-sum array

#include <iostream>
#include <vector>

using ll = long long;
std::vector<ll> PrefixSumArray(const std::vector<ll>& v) {
    int n = v.size();
    std::vector<ll> sum(n);
    if (n == 0) {return sum;}
    sum[0] = v[0];
    
    for (int i = 1; i < n; ++i) {
        sum[i] = sum[i - 1] + v[i];
    }
    return sum;
}

int main() {
    std::vector<ll> v = {10,20,30,40,50,60};
    std::vector<ll> sum = PrefixSumArray(v);

    for (int x : sum) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}