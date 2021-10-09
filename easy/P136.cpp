// https://leetcode.com/problems/single-number/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int singleNumber(vector<int>& nums) {
    unordered_map<int, int> bin;
    
    for (int i = 0; i < nums.size(); i++) {
        if (!bin[nums[i]]) {
            bin[nums[i]] = 1;
        } else {
            bin[nums[i]]++;
        }
    }
    
    for (auto k : bin) {
        if (k.second == 1) {
            return k.first;
        }
    }
    
    return -1;
}

int main() {
    vector<int> nums = {9, 9, 5, 3, 3, 7, 7};
    cout << singleNumber(nums) << endl;
    return 0;
}
