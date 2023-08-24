// https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr, int size)
{
    int largest = arr[0];
    int sLargest = -1;

    for (int i = 0; i < size; i++)
    {
        int it = arr[i];
        if (it > largest)
        {
            sLargest = largest;
            largest = it;
        }
        else if (it < largest && it > sLargest)
        {
            sLargest = it;
        }
    }

    return sLargest;
}

int secondSmallest(vector<int> &arr, int size)
{
    int smallest = arr[0];
    int sSmallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        int it = arr[i];
        if (it < smallest)
        {
            sSmallest = smallest;
            smallest = it;
        }
        else if (it != smallest && it < sSmallest)
        {
            sSmallest = it;
        }
    }

    return sSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    int sLargest = secondLargest(a, n);
    int sSmallest = secondSmallest(a, n);

    return {sLargest, sSmallest};
}

int main()
{
    return 0;
}