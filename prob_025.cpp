// find element with maximum frequencies

#include <iostream>
#include <vector>
#include <map>

int ElementWithMaximumFrequency(const std::vector<int>& v) {
    std::map<int, int> freq;

    for (int x : v) {
        freq[x]++;
    }

    // find key with with highest value
    int maxElement = v[0];
    int maxCount = 0;

    for (auto const& p : freq) {
        if (p.second > maxCount) {
            maxCount = p.second;
            maxElement = p.first;
        }
    }

    return maxElement;
}

int main() {
    std::vector<int> v = {0,0,0,1,1,2,2,2,2,2,3,4,4,4};
    int f = ElementWithMaximumFrequency(v);

    std::cout << f << std::endl;


    return 0;
}

