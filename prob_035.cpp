// build difference array and apply range update

#include <iostream>
#include <vector>

struct DifferenceArray {
    std::vector<int> D;
    int n;

    // constructor to intialize D
    DifferenceArray(int size) {
        n = size;
        D.assign(n + 1, 0);
    }

    // method for single update
    void addUpdate(int L, int R, int val) {
        D[L] += val;
        D[R + 1] -= val;
    }

    // method to reconstruct and apply to original array 
    void buildAndApply(std::vector<int>& v) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += D[i];
            v[i] += sum;
        }
    }
};

int main() {
    std::vector<int> v = {10, 10, 10, 10, 10, 10, 10};

    DifferenceArray engine(v.size());
    engine.addUpdate(2,3,4);
    engine.addUpdate(0,2,-2);
    engine.addUpdate(4,6,6);

    engine.buildAndApply(v);

    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}
