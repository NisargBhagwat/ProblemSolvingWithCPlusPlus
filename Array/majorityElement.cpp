// https://leetcode.com/problems/majority-element/description/
// Boyer - Moore voting algorithm
#include <bits/stdc++.h>
using namespace std;

/*
Brute force approach
TC = O(nlog(n));
SC = O(n);
*/
// class Solution
// {
// public:
//     int majorityElement(vector<int> &nums)
//     {
//         map<int, int> freqMap;
//         int n = nums.size();
//         int minReq = floor(n / 2);

//         for (int i = 0; i < n; i++)
//         {
//             if (++freqMap[nums[i]] > minReq)
//             {
//                 return nums[i];
//             }
//         }

//         return -1;
//     }
// };

/*
Best Approach
TC = O(n);
SC = O(1);
*/
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int minReq = n / 2;
        int votes = 0, candidate = -1;

        for (int i = 0; i < n; i++)
        {
            if (votes == 0)
            {
                candidate = nums[i];
                votes++;
            }
            else
            {
                if (nums[i] == candidate)
                {
                    votes++;
                }
                else
                {
                    votes--;
                }
            }
        }

        int count = 0;
        for (auto it : nums)
        {
            if (it == candidate)
                count++;
        }

        if (count > minReq)
            return candidate;

        return -1;
    }
};

int main()
{
    vector<int> nums{2, 2, 1, 1, 1, 2, 2};
    Solution s;

    const int ans = s.majorityElement(nums);
    cout << ans;
    return 0;
}