//Given an array of n integers.
//In the given array every element appeared exactly twice except two elements.
//what are those two elements which appeared exactly once
#include <iostream>
#include <vector>

using namespace std;  

pair<int, int> findUniqueElements(const vector<int>& nums) {
    int xorSum = 0;

    for (int num : nums) {
        xorSum ^= num;
    }


    int setBit = xorSum & -xorSum;

    
    int num1 = 0, num2 = 0;
    for (int num : nums) {
        if (num & setBit) {
            num1 ^= num;  
        } else {
            num2 ^= num;  
        }
    }

    return {num1, num2};
}

int main() {
    vector<int> nums = {1, 2, 3, 2, 1, 4};
    auto result = findUniqueElements(nums);

    cout << "The two unique elements are: " << result.first << " and " << result.second << endl;

    return 0;
}
