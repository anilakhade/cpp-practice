// check if array is palindrome

#include <iostream>
#include <vector>

bool IsPalindrome(const std::vector<int>& v) {

    int n = v.size();
    int left = 0;
    int right = n - 1;

    while (left < right) {
        if (v[left] != v[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

int main() {
    std::vector<int> v = {2,3,3,2};
    std::vector<int> v1 = {1,2,3,4,5};
    std::cout << IsPalindrome(v) << std::endl;
    std::cout << IsPalindrome(v1) << std::endl;
    return 0;
}
