// https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        int it = arr.at(i);
        if (it > largest)
        {
            largest = it;
        }
    }
    return largest;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int largest = largestElement(arr, 5);
    cout << largest;
    return 0;
}