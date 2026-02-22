// Rotate array left by k (naive)

#include <iostream>
#include <vector>

void RotateLeftByK(std::vector<int>& v, int k) {
    int n = v.size();
    if (n < 2) return;

    k = k % n;
    if (k == 0) return;
    
    while (k > 0) {
        int i = 0;
        int temp = v[i];
        for (int i = 0; i < n - 1; ++i) {
            v[i] = v[i + 1];
        }
        v[n - 1] = temp;
        --k;
    }
}

int main() {

    std::vector<int> v = {5,1,4,3,2,0};
    int k = 2;
    RotateLeftByK(v, k);

    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
