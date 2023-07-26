// https://www.codingninjas.com/studio/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    vector<int> Union;

    while (i < n && j < m)
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

    while (j < m)
    {
        if (Union.back() != b[j])
        {
            Union.push_back(b[j]);
        }
        j++;
    }

    while (i < n)
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