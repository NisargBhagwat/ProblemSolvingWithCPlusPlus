// https://leetcode.com/problems/sort-colors/
// Dutch National Flag problem
#include <bits/stdc++.h>
using namespace std;

/*
Brute force Approach
TC = O(4n);
SC = O(1);
*/
// class Solution
// {
// public:
//     void sortColors(vector<int> &nums)
//     {
//         int n = nums.size();
//         int zero = 0, one = 0, two = 0;

//         for (int i = 0; i < n; i++)
//         {
//             int it = nums[i];
//             if (it == 0)
//             {
//                 zero++;
//             }
//             else if (it == 1)
//             {
//                 one++;
//             }
//             else if (it == 2)
//             {
//                 two++;
//             }
//         }

//         int cnt = 0;
//         for (int i = 0; i < zero; i++)
//         {
//             nums[cnt] = 0;
//             cnt++;
//         }
//         for (int i = 0; i < one; i++)
//         {
//             nums[cnt] = 1;
//             cnt++;
//         }
//         for (int i = 0; i < two; i++)
//         {
//             nums[cnt] = 2;
//             cnt++;
//         }
//     }
// };

/*
Best Approach
TC = O(n)
SC = O(1)
*/
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;

        while (mid <= high)
        {
            int it = nums[mid];
            if (it == 0)
            {
                swap(nums[low++], nums[mid++]);
            }
            else if (it == 1)
            {
                mid++;
            }
            else if (it == 2)
            {
                swap(nums[mid], nums[high--]);
            }
        }

        for (auto it : nums)
        {
            cout << it << endl;
        }
    }
};

int main()
{

    vector<int> nums{2,0,2,1,1,0};
    Solution s;
    s.sortColors(nums);

    return 0;
}