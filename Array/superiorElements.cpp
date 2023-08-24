// https://www.codingninjas.com/studio/problems/superior-elements_6783446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include <bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int> &a)
{
    // Write your code here.
    vector<int> superiors;
    int n = a.size();
    int max = a[n - 1];
    superiors.push_back(a[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > max)
        {
            max = a[i];
            superiors.push_back(a[i]);
        }
    }

    return superiors;
}

int main()
{
    vector<int> a = {1, 2, 3, 2};

    a = superiorElements(a);

    for (auto it : a)
    {
        cout << it << endl;
    }
    
    return 0;
}