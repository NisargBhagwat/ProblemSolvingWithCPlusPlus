// https://leetcode.com/problems/intersection-of-two-arrays/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> Intersection;
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0;

        while (i < n && j < m)
        {
            if (nums1[i] < nums2[j])
            {
                i++;
            }
            else if (nums2[j] < nums1[i])
            {
                j++;
            }
            else
            {
                if (Intersection.size() == 0 || Intersection.back() != nums1[i])
                {
                    Intersection.push_back(nums1[i]);
                }
                i++;
            }
        }

        return Intersection;
    }
};

int main()
{
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    Solution s;
    vector<int> intersection = s.intersection(nums1, nums2);

    for (auto it : intersection)
    {
        cout << it << " ";
    }

    return 0;
}