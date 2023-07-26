// https://www.codingninjas.com/studio/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <bits/stdc++.h>
using namespace std;

/*
 Brute force
 TC = nlog(n) + mlog(m) + log(n+m)
 SC = O(n+m)
*/
// vector<int> sortedArray(vector<int> a, vector<int> b)
// {
//     set<int> Union;

//     for (int i = 0; i < a.size(); i++) // nlog(n)
//     {
//         Union.insert(a[i]);
//     }
//     for (int i = 0; i < b.size(); i++) //mlog(m)
//     {
//         Union.insert(b[i]);
//     }

//     vector<int> arr;
//     for (auto it : Union) //log(n+m)
//     {
//         arr.push_back(it);
//     }
//     return arr;
// }

/*
Optimal
TC = n + m + n + m = O(n+m)
SC = O(n+m)
*/
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    vector<int> Union;

    while (i < n && j < m) // n + m
    {
        int aIt = a[i];
        int bIt = b[j];

        if (aIt <= bIt)
        {
            if (Union.size() == 0 || Union.back() != aIt)
            {
                Union.push_back(aIt);
            }
            i++;
        }
        else
        {
            if (Union.size() == 0 || Union.back() != bIt)
            {
                Union.push_back(bIt);
            }
            j++;
        }
    }

    while (j < m) //m
    {
        if (Union.back() != b[j])
        {
            Union.push_back(b[j]);
        }
        j++;
    }

    while (i < n) //n
    {
        if (Union.back() != a[i])
        {
            Union.push_back(a[i]);
        }
        i++;
    }

    return Union;
}

int main()
{
    vector<int> a = {1, 2, 3, 3};
    vector<int> b = {2, 2, 4};

    vector<int> Union = sortedArray(a, b);

    for (auto it : Union)
        cout << it << " ";
    return 0;
}