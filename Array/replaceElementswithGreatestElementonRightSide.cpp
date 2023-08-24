// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

#include <bits/stdc++.h>
using namespace std;

/*
TC = O(n);
SC = O(1);
*/
class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int n = arr.size();
        int maxVal = arr[n - 1];
        arr[n - 1] = -1;

        for (int i = n - 2; i >= 0; i--)
        {
            int it = arr[i];
            arr[i] = maxVal;
            maxVal = max(maxVal, it);
        }

        return arr;
    }
};

int main()
{

    vector<int> arr = {17, 18, 5, 4, 6, 1};
    Solution s;
    arr = s.replaceElements(arr);

    for (auto it : arr)
    {
        cout << it << endl;
    }

    return 0;
}