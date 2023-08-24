// https://leetcode.com/problems/next-permutation/

#include <bits/stdc++.h>
using namespace std;

/*
c++ stl inbuild algo
TC = O(n);
SC = O(1);
*/
// class Solution
// {
// public:
//     void nextPermutation(vector<int> &nums)
//     {
//         next_permutation(nums.begin(), nums.end());
//         for (auto it : nums)
//         {
//             cout << it;
//         }
//     }
// };

/*
Best Solution [next_permutation algorithem]
TC = O(n);
SC = O(1);
*/
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int ind = -1;

        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                ind = i;
                break;
            }
        }

        if (ind == -1)
        {
            reverse(nums.begin(), nums.end());
            for (auto it : nums)
            {
                cout << it;
            }
            return;
        }

        for (int i = n - 1; i > ind; i--)
        {
            if (nums[i] > nums[ind])
            {
                swap(nums[i], nums[ind]);
                break;
            }
        }

        reverse(nums.begin() + ind + 1, nums.end());

        for (auto it : nums)
        {
            cout << it;
        }
    }
};

int main()
{
    vector<int> nums = {1, 3, 2};
    Solution s;
    s.nextPermutation(nums);

    return 0;
}