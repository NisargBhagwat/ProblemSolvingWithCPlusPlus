// https://leetcode.com/problems/single-number/

#include <bits/stdc++.h>
using namespace std;

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
