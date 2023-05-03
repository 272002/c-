#include <iostream>
#include <vector>

using namespace std;

bool subsetSumHelper(vector<int> &nums, int target, vector<int> &subset, int start, int end)
{
    if (target == 0)
    {
        return true;
    }
    if (start > end)
    {
        return false;
    }
    // include the current element and backtrack
    subset.push_back(nums[start]);
    bool include = subsetSumHelper(nums, target - nums[start], subset, start + 1, end);
    if (include)
    {
        return true;
    }
    // do not include the current element and backtrack
    subset.pop_back();
    bool exclude = subsetSumHelper(nums, target, subset, start + 1, end);
    return exclude;
}

vector<int> subsetSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> subset;
    subsetSumHelper(nums, target, subset, 0, n - 1);
    return subset;
}

int main()
{
    int w, target;

    cout << "Enter the no. of weights " << endl;
    cin >> w;
    vector<int> nums(w, 0);
    cout << "Enter the weights " << endl;
    for (int i = 0; i < w; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter the target " << endl;
    cin >> target;
    vector<int> st;
    st = subsetSum(nums, target);
    
    if (st.empty())
    {
        cout << "Not possible " << endl;
    }
    else
    {
        cout << "The included weights are " << endl;
        for (int it = 0; it < st.size(); it++)
        {
            cout << st[it] << " ";
        }
    }

    return 0;
}
