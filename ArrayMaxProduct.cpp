#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int largestElemIndex;
        int sLargestElemIndex;

        if (nums[0] > nums[1] || nums[0] == nums[1])
        {
            largestElemIndex = nums[0];
            sLargestElemIndex = nums[1];
        }
        else
        {
            largestElemIndex = nums[1];
            sLargestElemIndex = nums[0];
        }

        for (int i = 0; i < nums.size(); i++)
        {
            int largest = nums[largestElemIndex];
            int sLargest = nums[sLargestElemIndex];
            int it = nums[i];

            if (it > largest)
            {
                sLargestElemIndex = largestElemIndex;
                largestElemIndex = i;
            }
            else if (i != largestElemIndex && it >= sLargest)
            {
                sLargestElemIndex = i;
            }
        }

        return (nums[largestElemIndex] - 1) * (nums[sLargestElemIndex] - 1);
    }
};

int main()
{
    vector<int> arr{10, 2, 5, 2};
    Solution s;
    int maxProduct = s.maxProduct(arr);

    cout << maxProduct;
    return 0;
}