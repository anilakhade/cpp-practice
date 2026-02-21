// count elements greater than x 

#include <iostream>
#include <vector>

int CountElementsGreaterThanX(const std::vector<int>& v, int e) {
    int total = 0;

    for (int x : v) {
        if (x > e) {
            ++total;
        }
    }
    return total;
}

int main() {

    std::vector<int> v = {4,6,5,-8,4,5,-9,5,-3,0,2,1,-6};
    int num = 2;

    int total = CountElementsGreaterThanX(v, num);
    std::cout << total << std::endl;

    return 0;
}
