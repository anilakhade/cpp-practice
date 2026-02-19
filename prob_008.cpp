// find last occurenc of the value

#include <iostream>
#include <vector>

int FindLastOccurenceOfValue(const std::vector<int>& v, int k) {
    int n = v.size();

    int i = n - 1;
    while (i >= 0) {
        if (k == v[i]) {
            return i;
        }
        --i;
    }
    return -1;
}

int main() {

    std::vector<int> v = {7,2,7,6,3,1,7,9,7,7};
    int k = 7;

    int at_index = FindLastOccurenceOfValue(v, k);
    
    std::cout << at_index << std::endl;

    return 0;
}