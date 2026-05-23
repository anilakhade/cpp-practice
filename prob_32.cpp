// find intersection of two sorted arryas

#include <iostream>
#include <vector>

std::vector<int> IntersectTwoSortedArrays(const std::vector<int>& v1, const std::vector<int>& v2) {
    std::vector<int> result;
    int i = 0, j = 0;
    int n = v1.size(), m = v2.size();

    while (i < n && j < m) {
        if (v1[i] < v2[j]) {
            ++i;
        } else if (v2[j] < v1[i]) {
            ++j;
        } else {
            result.push_back(v1[i]);
            ++i;
            ++j;
        }
    }

    return result;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;              // numbere of test cases
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int N, M;       // N = size of arr1 & M = size of arr2
        std::cin >> N >> M;

        std::vector<int> v1(N);
        for (int i = 0; i < N; ++i) {std::cin >> v1[i];}

        std::vector<int> v2(M);
        for (int i = 0; i < M; ++i) {std::cin >> v2[i];}

        std::vector<int> r = IntersectTwoSortedArrays(v1, v2);
        
        for (size_t k = 0; k < r.size(); ++k) {
            std::cout << r[k];
            if (k + 1 < r.size()) {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    
    return 0;
}
