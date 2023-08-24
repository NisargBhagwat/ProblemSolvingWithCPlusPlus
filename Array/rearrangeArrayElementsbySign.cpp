// https://leetcode.com/problems/rearrange-array-elements-by-sign/

#include <bits/stdc++.h>
using namespace std;

/*
Brute force approach
TC = O(2n);
SC = O(n);
*/
// class Solution
// {
// public:
//     vector<int> rearrangeArray(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<int> positive, negative;

//         for (auto it : nums)
//         {
//             if (it > 0)
//             {
//                 positive.push_back(it);
//             }
//             else
//             {
//                 negative.push_back(it);
//             }
//         }

//         vector<int> result;
//         for (int i = 0; i < (n / 2); i++)
//         {
//             result.push_back(positive[i]);
//             result.push_back(negative[i]);
//         }

//         return result;
//     }
// };

/*
Best Approach
TC = O(n);
SC = O(n);
*/
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 0);
        int posIndex = 0;
        int negIndex = 1;

        for (auto it : nums)
        {
            if (it > 0)
            {
                ans[posIndex] = it;
                posIndex += 2;
            }
            else
            {
                ans[negIndex] = it;
                negIndex += 2;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    Solution s;
    vector<int> ans = s.rearrangeArray(nums);

    for (auto it : ans)
    {
        cout << it << endl;
    }
    return 0;
}