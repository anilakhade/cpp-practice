// Compute average of elements (careful with types)

#include <iostream>
#include <vector>

double AverageOfArray(const std::vector<int>& v) {
    if (v.empty()) return 0.0;
    int n = v.size();
    long long sum = 0;

    for (int x : v) {
        sum += x;
    }

    double avg = static_cast<double>(sum) / n;

    return avg;
}

int main() {

    std::vector<int> v = {1,2,3,4,5,12};

    double avg = AverageOfArray(v);
    std::cout << avg << std::endl;

    return 0;
}
