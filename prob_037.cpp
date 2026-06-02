// Fixed size window maximum sum

#include <iostream>
#include <vector>

int FixedSizeWindowSum(const std::vector<int>& v, int k) {
    int n = v.size();
    if (n < k) return -1;
    
    int win_sum = 0;

    for (int i = 0; i < k; ++i) {
        win_sum += v[i];
    }

    int max_sum = win_sum;

    for (int i = k; i < n; ++i) {
        win_sum += v[i] - v[i - k];
        max_sum = std::max(win_sum, max_sum);
    }

    return max_sum;
    
}


int main() {
    std::vector<int> v = {1,2,4,5,5,-1,0,6,7,3};
    int k = 3;
    
    int max = FixedSizeWindowSum(v, k);

    std::cout << max << std::endl;

    return 0;
}