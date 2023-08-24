// https://leetcode.com/problems/spiral-matrix/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0, bottom = n - 1;
        int left = 0, right = m - 1;
        vector<int> arr;

        while (top <= bottom && left <= right)
        {
            for (int i = left; i <= right; i++)
            {
                arr.push_back(matrix[top][i]);
            }

            top++;

            for (int i = top; i <= bottom; i++)
            {
                arr.push_back(matrix[i][right]);
            }

            right--;

            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    arr.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if (left <= right)
            {

                for (int i = bottom; i >= top; i--)
                {
                    arr.push_back(matrix[i][left]);
                }

                left++;
            }
        }

        return arr;
    }
};

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    Solution s;
    vector<int> arr = s.spiralOrder(matrix);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}