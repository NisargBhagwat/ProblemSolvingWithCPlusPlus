// https://leetcode.com/problems/maximum-subarray/
// Kadane's algorithm
#include <bits/stdc++.h>
using namespace std;

/*
Brute force approach
TC = O(n2);
SC = O(1);
*/
// class Solution
// {
// public:
//     int maxSubArray(vector<int> &nums)
//     {
//         int n = nums.size();
//         int maxSum = INT_MIN;

//         for (int i = 0; i < n; i++)
//         {
//             int sum = 0;
//             for (int j = i; j < n; j++)
//             {
//                 sum += nums[j];
//                 maxSum = max(sum, maxSum);
//             }
//         }

//         return maxSum;
//     }
// };

/*
Best Approach
TC = O(n)
SC = O(1)
*/
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size(),
            maxSum = INT_MIN,
            sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            maxSum = max(maxSum, sum);

            if (sum < 0)
                sum = 0;
        }
        return maxSum;
    }
};

int main()
{
    vector<int> nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution s;

    const int ans = s.maxSubArray(nums);
    cout << ans;
    return 0;
}