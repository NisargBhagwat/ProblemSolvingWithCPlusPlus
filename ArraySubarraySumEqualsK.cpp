// https://leetcode.com/problems/subarray-sum-equals-k/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int totalPossibleSubArray = 0,
            size = nums.size(),
            j = 0;

        for (int i = 0; i < size; i++)
        {
            int it = i;
            int sum = 0;

            while (sum < k && it < size)
            {
                sum += nums[it];
                j++;
                it++;
            }
            if (sum == k)
            {
                totalPossibleSubArray++;
            }
            j = 0;
        }

        return totalPossibleSubArray;
    }
};

int main()
{
    vector<int> nums = {-1, -1, 1};
    int k = 0;
    Solution s;
    int ans = s.subarraySum(nums, k);
    cout << ans;
    return 0;
}