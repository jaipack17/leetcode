// https://leetcode.com/problems/sort-colors/

#include <iostream>
#include <vector>
using namespace std;

int count(vector<int> vect, int val) {
    int c = 0;
    
    for (int i = 0; i < vect.size(); i++) {
        if (vect[i] == val) c++;
    }
    
    return c;
}

void debug(vector<int> vect) {
    for (auto i: vect) cout << i << ' ';
    cout << "" << endl;
}

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int c0 = count(nums, 0);
    int c1 = count(nums, 1);
    int c2 = count(nums, 2);
    
    for (int i = 0; i < n; i++) {
        if (i < c0) {
            nums[i] = 0;
        } else if(i < c0 + c1) {
            nums[i] = 1;
        } else if(i < n) {
            nums[i] = 2;
        }
    }

    debug(nums);
}

int main() {
    vector<int> nums = {0, 1, 2, 1, 0, 2, 2};
    sortColors(nums);
    return 0;
}