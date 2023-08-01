// https://leetcode.com/problems/single-number/

#include <bits/stdc++.h>
using namespace std;

/*
Better solution
TC = O(n) + O(n/2 + 1)
SC = O(n/2 + 1)
*/
// class Solution
// {
// public:
//     int singleNumber(vector<int> &nums)
//     {
//         int n = nums.size();
//         map<int, int> numsCount;

//         for (auto it : nums) // O(n)
//         {
//             numsCount[it]++;
//         }

//         for (auto it : numsCount) // O(n/2 + 1)
//         {
//             if (it.second == 1)
//             {
//                 return it.first;
//             }
//         }

//         return -1;
//     }
// };

/*
Optimized solution
TC= O(n);
SC = O(1)
*/

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int n = nums.size();

        // XOR all the elements:
        int xorr = 0;
        for (int i = 0; i < n; i++)
        {
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};

int main()
{
    vector<int> arr{4, 1, 2, 1, 2};
    Solution s;
    int ans = s.singleNumber(arr);
    cout << ans;
    return 0;
}
