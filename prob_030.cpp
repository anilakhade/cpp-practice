// check if two arrays are equals multi set wise
// this is the first time i have addopted to multi test case format

#include <iostream>
#include <vector>
#include <unordered_map>

bool CheckIfTwoArraysEquals(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;

    std::unordered_map<int, int> m;
    
    for (int x : v1) m[x]++;
    for (int x : v2) m[x]--;

    for (auto& p: m) {
        if (p.second != 0) return false;
    }
    return true;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        std::cin >> N;

        std::vector<int> v1(N);
        std::vector<int> v2(N);

        for (int i = 0; i < N; ++i) {
            std::cin >> v1[i];
        }

        for (int i = 0; i < N; ++i) {
            std::cin >> v2[i];
        }

        if (CheckIfTwoArraysEquals(v1, v2)) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}