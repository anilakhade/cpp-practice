// maximum sum of subarrays (kadane's)

#include <iostream>
#include <vector>
#include <algorithm>

int MaxSumSubArray(const std::vector<int>& v) {
    if (v.empty()) return 0;

    int max_sum = v[0];
    int curr_sum = v[0];

    for (size_t i = 0; i < v.size(); ++i) {
        curr_sum = std::max(v[i], curr_sum + v[i]);
        max_sum = std::max(curr_sum, max_sum);
    }
    return max_sum;
}



int main() {
    std::vector<int> v = {-5,6,2,-3,0,4,1,-7,10};
    int m = MaxSumSubArray(v);
    std::cout << m << std::endl;
    return 0;
}