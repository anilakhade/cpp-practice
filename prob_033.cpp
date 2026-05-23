// longest prefix with sum <= X

#include <iostream>
#include <vector>

int LongestPrefixSum(const std::vector<int>& v, int x) {
    int sum = 0;

    for (size_t i = 0; i < v.size(); ++i) {
        sum += v[i];
        if (sum > x) {
            return i;
        }
    }
    return v.size();
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    size_t T;
    std::cin >> T;

    for (size_t t = 0; t < T; ++t) {
        size_t N;
        std::cin >> N;

        int x;
        std::cin >> x;

        std::vector<int> v(N);
        for (size_t i = 0; i < N; ++i) {
            std::cin >> v[i];
        }

        int len = LongestPrefixSum(v, x);
        std::cout << len << "\n";
    }
    return 0;
}
