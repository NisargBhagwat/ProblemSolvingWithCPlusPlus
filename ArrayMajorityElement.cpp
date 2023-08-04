// https://leetcode.com/problems/majority-element/
// Boyer - Moore voting algorithm
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int vote = 0, candidate;

        for (int i = 0; i < n; i++)
        {
            if (vote == 0)
            {
                candidate = nums[i];
                vote++;
            }
            else
            {
                if (nums[i] == candidate)
                {
                    vote++;
                }
                else
                {
                    vote--;
                }
            }
        }

        int cnt = 0;
        for (auto it : nums)
        {
            if (it == candidate)
                cnt++;
        }

        if(cnt > (n/2)){
            return candidate;
        }

        return -1;
    }
};

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    Solution s;

    int ans = s.majorityElement(nums);
    cout << ans << endl;

    return 0;
}