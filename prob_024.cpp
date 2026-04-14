// Count the frequency of the all the elements

#include <iostream>
#include <vector>
#include <map>

int main() {
    std::vector<int> v = {1,1,2,2,3,3,3,4,5,5,5,6};
    
    //Declare map<KeyType, ValueType>
    std::map<int, int> freq;
    
    //fill the map 
    for (int x : v) {
        freq[x]++;
    }

    for (auto const &p : freq) {
        std::cout << p.first << " appears " << p.second << " times " << std::endl;
    }

    return 0;
}
