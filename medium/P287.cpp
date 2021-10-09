// https://leetcode.com/problems/find-the-duplicate-number/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findDuplicate(vector<int>& nums) {
    unordered_map<int, int> bin;

    for (int i = 0; i < nums.size(); i++) {
        if (!bin[nums[i]]) {
            bin[nums[i]] = 1;
        } else {
            bin[nums[i]]++;
        }
    }

    for (auto k : bin) {
        if (k.second != 1) {
            return k.first;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {0, 0, 4, 5, 6, 7, 5, 7, 6};
    cout << findDuplicate(nums) << endl;
    return 0;
}