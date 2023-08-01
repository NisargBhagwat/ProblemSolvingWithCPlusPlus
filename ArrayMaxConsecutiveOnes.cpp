// https://leetcode.com/problems/max-consecutive-ones/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int k = 0;
        int i = 0;
        int size = nums.size();

        for (int j = 0; j < size; j++)
        {
            if (nums[j] == 0)
            {
                 k = max(k, i);
                i = 0;
            }
            else
            {
                i++;
            }
        }

        return max(i, k);
    }
};

int main()
{
    vector<int> arr{1, 1, 0, 1, 1, 1};
    Solution s;
    int ans = s.findMaxConsecutiveOnes(arr);
    cout << ans;
    return 0;
}