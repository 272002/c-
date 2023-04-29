#include <iostream>
#include <vector>

using namespace std;

bool subsetSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> subset;
    return subsetSumHelper(nums, target, subset, 0, n-1);
}

bool subsetSumHelper(vector<int>& nums, int target, vector<int>& subset, int start, int end) {
    if (target == 0) {
        return true;
    }
    if (start > end) {
        return false;
    }
    // include the current element and backtrack
    subset.push_back(nums[start]);
    bool include = subsetSumHelper(nums, target - nums[start], subset, start+1, end);
    if (include) {
        return true;
    }
    // do not include the current element and backtrack
    subset.pop_back();
    bool exclude = subsetSumHelper(nums, target, subset, start+1, end);
    return exclude;
}

int main() {
    vector<int> nums = {3, 34, 4, 12, 5, 2};
    int target = 9;
    bool ans = subsetSum(nums, target);
    if (ans) {
        cout << "Yes, there exists a subset that sums up to " << target << endl;
    } else {
        cout << "No, there does not exist a subset that sums up to " << target << endl;
    }
    return 0;
}
