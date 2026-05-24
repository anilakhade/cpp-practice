// count subarray with sum = X (brute force)

#include <iostream>
#include <vector>

int NoOfSubaaraysOfSumX(const std::vector<int>& v, int x) {
    if (v.size() < 1) return -1;
    if (v.size() < 2 && v[0] == x) return 1;
    int count = 0;
    int n = v.size();

    for (int i = 0; i < n; ++i) {
        int sum = 0;

        for (int j = i; j < n; ++j) {
            sum += v[j];

            if (sum == x) {
                ++count;
            }
        }
    }
    return count;
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
        
        int count = NoOfSubaaraysOfSumX(v, x);
        std::cout << count << "\n";
    }

    return 0;
}
