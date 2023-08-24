// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <bits/stdc++.h>
using namespace std;

/*
Brute force approach
TC = O(n2)
SC = O(1)
*/
// class Solution
// {
// public:
//     int maxProfit(vector<int> &prices)
//     {
//         int n = prices.size();
//         int maxProfit = 0;

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 int profit = prices[j] - prices[i];
//                 if (profit > 0)
//                 {
//                     maxProfit = max(maxProfit, profit);
//                 }
//             }
//         }

//         return maxProfit;
//     }
// };

/*
Best Aproach
TC = O(n);
SC = O(1);
*/
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int minPrice = prices[0], maxProfit = 0;

        for (int i = 0; i < n; i++)
        {
            int profit = prices[i] - minPrice;
            maxProfit = max(maxProfit, profit);
            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};

int main()
{
    vector<int> prices = {7, 6, 4, 3, 1};
    Solution s;
    int ans = s.maxProfit(prices);
    cout << ans;

    return 0;
}