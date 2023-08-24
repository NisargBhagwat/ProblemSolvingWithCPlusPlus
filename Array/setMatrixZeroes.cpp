// https://leetcode.com/problems/set-matrix-zeroes/

#include <bits/stdc++.h>
using namespace std;

/*
Brute force approach
TC = O(n2);
SC = O(n + m)
*/
// class Solution
// {
// public:
//     void setZeroes(vector<vector<int>> &matrix)
//     {
//         int rowSize = matrix.size();
//         int colSize = matrix[0].size();
//         int rows[rowSize] = {0};
//         int cols[colSize] = {0};

//         for (int i = 0; i < rowSize; i++)
//         {
//             for (int j = 0; j < colSize; j++)
//             {
//                 if (matrix[i][j] == 0)
//                 {
//                     rows[i] = 1;
//                     cols[j] = 1;
//                 }
//             }
//         }

//         for (int i = 0; i < rowSize; i++)
//         {
//             for (int j = 0; j < colSize; j++)
//             {
//                 if (rows[i] || cols[j])
//                 {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }

//         for (int i = 0; i < rowSize; i++)
//         {
//             for (int j = 0; j < colSize; j++)
//             {
//                 cout << matrix[i][j];
//             }
//             cout << endl;
//         }
//     }
// };

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;

                    if (j != 0)
                    {
                        matrix[0][j] = 0;
                    }
                    else
                    {
                        col0 = 0;
                    }
                }
            }
        }

        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (matrix[i][j] != 0)
                {
                    if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    {
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        if (matrix[0][0] == 0)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[0][j] = 0;
            }
        }

        if (col0 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                matrix[i][0] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << matrix[i][j];
            }
            cout << endl;
        }
    }
};

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 0, 6, 7}, {8, 0, 0, 9}, {10, 11, 12, 13}};
    Solution s;

    s.setZeroes(matrix);

    return 0;
}