// Rotate array by k (naive)

#include <iostream>
#include <vector>

void RotateRightbyK(std::vector<int>& v, int k) {
    int n = v.size();
    if (n < 2) return;
    k = k % n;
    if (k == 0) return;

    while (k > 0) {
        int i = n - 1;
        int temp = v[i];

        for (i = n - 1; i > 0; --i) {
            v[i] = v[i -1];
        }
        v[0] = temp;
        --k;
    }

}

int main() {
    std::vector<int> v = {1,5,9,7,5,3,0};
    int k = 3;

    RotateRightbyK(v, k);

    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}