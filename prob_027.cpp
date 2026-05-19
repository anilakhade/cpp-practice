// find duplicate numbers

#include <bits/stdc++.h>

int FindDuplicate(const std::vector<int>& v) {
    std::unordered_set<int> seen;

    for (int x : v) {
        if (seen.count(x)) return x;
        seen.insert(x);
    }
    return -1;
}

int main() {
    std::vector<int> v = {0,1,2,0,4,5};
    
    int duplicate = FindDuplicate(v);

    std::cout << duplicate << std::endl;


    return 0;
}
    

