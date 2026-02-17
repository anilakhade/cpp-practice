// find first occurence of the value(k)

#include <iostream>
#include <vector>

int FindFirstOccurenceOfValue(const std::vector<int>& v, int k) {
    int n = v.size();
    int i = 0;
    while(i < n) {

        if (k == v[i]) {
            return i;
        }
        ++i;
    }
    return -1;
}

int main() {

    std::vector<int> v = {9,2,8,5,-1,2,6,3,-1,0,-2,5,9,0};
    int k = 0;

    int at_index = FindFirstOccurenceOfValue(v, k);
    std::cout << at_index << std::endl;

    return 0;
}