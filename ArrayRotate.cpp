// https://leetcode.com/problems/rotate-array/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverse(vector<int> &nums, int start, int end)
    {
        while (start <= end)
        {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int> &nums, int k)
    {
        // brute force soln

        // int size = nums.size();
        // vector<int> temp;
        // k = k % size;

        // for (int i = size - k; i < size; i++)
        // {
        //     temp.push_back(nums[i]);
        // }
        // for (int i = size - k - 1; i >= 0; i--)
        // {
        //     nums[i + k] = nums[i];
        // }
        // for (int i = temp.size() - 1; i >= 0; i--)
        // {
        //     int it = temp[i];
        //     nums[i] = it;
        // }

        // optimal solution
        int size = nums.size();
        k = k % size;
        reverse(nums, 0, size - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, size - 1);
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int k = 2;
    Solution s;

    s.rotate(arr, k);

    for (auto it : arr)
    {
        cout << it;
    }

    return 0;
}