// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int count = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[count] = nums[i];
                count++;
            }
        }

        return count;
    }
};

int main()
{
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    Solution s;
    int ans = s.removeDuplicates(arr);

    cout << ans << endl;
    for (auto a : arr)
    {
        cout << a;
    }
    return 0;
}
