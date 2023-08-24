// https://leetcode.com/problems/longest-consecutive-sequence/description/

#include <bits/stdc++.h>
using namespace std;

/*
Brute force Approach
TC = O(nlogn);
SC = O(1);
*/
// class Solution
// {
// public:
//     int longestConsecutive(vector<int> &nums)
//     {
//         int n = nums.size();
//         int largest = 0;
//         int cnt = 1;

//         if(n == 1) return 1;
//         sort(nums.begin(), nums.end());

//         for (int i = 1; i < n; i++)
//         {
//             if(nums[i - 1] + 1 == nums[i]){
//                 cnt++;
//             }else if(nums[i - 1] != nums[i]){
//                 cnt = 1;
//             }

//             largest = max(largest, cnt);
//         }

//         return largest;
//     }
// };

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;
        int largest = 1;
        unordered_set<int> st;

        for (auto it : nums)
        {
            st.insert(it);
        }

        for (auto it : st)
        {
            if (st.find(it - 1) == st.end())
            {
                int cnt = 1;
                while (st.find(it + 1) != st.end())                                        
                {
                    it = it + 1;
                    cnt++;
                }
                largest = max(largest, cnt);
            }
        }

        return largest;
    }
};

int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    Solution s;

    int len = s.longestConsecutive(nums);

    cout << len;

    return 0;
}