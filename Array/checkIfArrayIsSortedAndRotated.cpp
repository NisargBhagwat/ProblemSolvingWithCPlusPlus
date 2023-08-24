// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                count++;
            }
        }
        if (nums[n - 1] > nums[0])
        {
            count++;
        }

        return count <= 1;
    }
};

int main()
{
    vector<int> arr = {1,2,3};
    Solution s;
    bool ans = s.check(arr);
    
    return 0;
}