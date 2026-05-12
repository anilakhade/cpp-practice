// find missing number from 1....n

#include <iostream>
#include <vector>
#include <climits>


int FindMax(const std::vector<int>& v) {
    int n = v.size();
    int max = INT32_MIN;

    int i = 0;
    while (i < n) {
        if (v[i] > max) {
            max = v[i];
        }
        ++i;
    }
    return max;
}


int FindMissingNumber(const std::vector<int>& v) {
    int n = v.size();
    int max_num = FindMax(v);

    int expected_sum = (max_num * (max_num + 1))/2;
    int acutal_sum = 0;

    for (int i = 0; i < n; ++i) {
        acutal_sum += v[i]; 
    }

    return expected_sum - acutal_sum;

}

int main() {
    std::vector<int> v = {1,2,3,4,6,7};
    std::vector<int> v1 = {-2,0,1,2};

    int miss = FindMissingNumber(v);
    int miss_v = FindMissingNumber(v1);

    std::cout << miss << std::endl;
    std::cout << miss_v << std::endl;

    return 0;
}