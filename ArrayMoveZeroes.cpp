#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int pointer = -1;
        int size = nums.size();

        for (int i = 0; i < size; i++)
        {
            if (nums[i] == 0)
            {
                pointer++;
                break;
            }
        }

        if (pointer == -1)
            return;

        for (int i = 0; i < size; i++)
        {
            int it = nums[i];
            if (it != 0)
            {
                int temp = nums[pointer];
                nums[pointer] = it;
                nums[i] = temp;
                pointer++;
            }
        }
    }
};

int main()
{
    vector<int> arr = {1};
    Solution s;
    s.moveZeroes(arr);

    for (auto it : arr)
    {
        cout << it;
    }
    return 0;
}