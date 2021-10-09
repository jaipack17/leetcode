// https://leetcode.com/problems/move-zeroes/

#include <iostream>
#include <vector>
using namespace std;

void debug(vector<int> vect) {
    for (auto i: vect) cout << i << " ";
    cout << "" << endl;
}

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    nums.erase(std::remove(nums.begin(), nums.end(), 0), nums.end());
    nums.resize(n);

    debug(nums);
}

int main() {
    vector<int> nums = {1, 0, 32, 9, 0};
    moveZeroes(nums);
    return 0;
}