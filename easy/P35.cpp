#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (target == nums[i]) return i;
        if (i == 0 && target <= nums[i]) return i;
        if (i == nums.size() - 1 && target >= nums[i]) return i + 1;
        if (target > nums[i] && target < nums[i + 1]) return i + 1;
    }
    
    return -1;
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;

    cout << searchInsert(nums, target) << endl;
    return 0;
}