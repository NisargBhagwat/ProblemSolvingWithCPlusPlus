// https://leetcode.com/problems/two-sum/description/

#include <bits/stdc++.h>
using namespace std;

/*
Brute force approach
TC = O(n2);
SC = O(n);
*/
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//       int n = nums.size();
//      for (int i = 0; i < n; i++)
//         {
//             for (int j = i+ 1; j < n; j++)
//             {
//                 if (target == nums[i] + nums[j])
//                 {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };

/*
Best approach
TC = O(nlon(n))
SC = O(n)
*/
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        map<int, int> numMap;

        for (int i = 0; i < n; i++)
        {
            int rem = target - nums[i];

            if (numMap.find(rem) != numMap.end())
            {
                return {numMap[rem], i};
            }
            else
            {
                numMap[nums[i]] = i;
            }
        }

        return {};
    }
};

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution s;

    vector<int> ans = s.twoSum(nums, target);

    for (auto it : ans)
    {
        cout << it << endl;
    }

    return 0;
}