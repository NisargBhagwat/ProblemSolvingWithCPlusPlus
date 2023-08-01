// https : // www.codingninjas.com/studio/problems/longest-subarray-with-sum-j_6682399?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include <bits/stdc++.h>
using namespace std;
/*
Brute-force approach
TC = O(n2)
SC = O(1)
*/

// int longestSubarrayWithSumK(vector<int> a, long long k)
// {
//     int longest = 0, size = a.size();

//     for (int i = 0; i < size; i++)
//     {
//         int sum = 0;

//         for (int j = i; j < size; j++)
//         {
//             sum += a[j];
//             if (sum > k)
//                 break;
//             if (sum == k)
//                 longest = max(longest, j - i + 1);
//         }
//     }

//     return longest;
// }

/*
Better approach
TC = O(nlong(n));
SC = O(n);
*/

// int longestSubarrayWithSumK(vector<int> a, long long k)
// {
//     map<long long, int> preSumMap;
//     long long sum = 0;
//     int maxLen = 0;
//     int n = a.size();

//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i];

//         if (sum == k)
//         {
//             maxLen = max(maxLen, i + 1);
//         }

//         long long rem = sum - k;

//         if (preSumMap.find(rem) != preSumMap.end()) // if rem is in the hashMap
//         {
//             int len = i - preSumMap[rem];
//             maxLen = max(maxLen, len);
//         }

//         if (preSumMap.find(rem) == preSumMap.end()) // if rem is not in hashMap
//         {
//             preSumMap[sum] = i;
//         }
//     }

//     return maxLen;
// }

/*
Best approach
*/

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int n = a.size();
    int left = 0, right = 0;
    int sum = a[0];
    int maxLen = 0;

    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }

        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;

        if (right < n)
        {
            sum += a[right];
        }
    }

    return maxLen;
}

int main()
{
    vector<int> nums = {0, 2, 5, 3, 3, 4, 4, 3, 0, 5, 5, 4, 4, 4, 3, 2, 0, 2, 3, 1, 3, 0, 4, 3, 1, 4, 5, 2, 4, 3, 1, 4, 5, 0, 3, 4, 0};
    int j = 52;
    int ans = longestSubarrayWithSumK(nums, j);
    cout << ans;
    return 0;
}