// https://leetcode.com/problems/missing-number/description/

#include <bits/stdc++.h>
using namespace std;

/*
Optimal solution
TC = O(n)
There is a Slide more optimilzed solution possible
*/
// class Solution
// {
// public:
//     int missingNumber(vector<int> &nums)
//     {
//         int size = nums.size();
//         int t = 0;
//         int sum = 0;

//         for (int i = 0; i < size; i++)
//         {
//             sum += nums[i];
//             t += (i + 1);
//         }

//         return t - sum;
//     }
// };

/*
Most optimal solution
TC = O(n)
*/
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int size = nums.size();
        int xOr1 = 0,
            xOr2 = 0;

        for (int i = 0; i < size; i++)
        {
            xOr1 ^= nums[i];
            xOr2 ^= (i+1);
        }

        return xOr1 ^ xOr2;
    }
};

int main()
{
    vector<int> nums = {3, 0, 1};
    Solution s;
    int ans = s.missingNumber(nums);
    cout << ans;
    return 0;
}