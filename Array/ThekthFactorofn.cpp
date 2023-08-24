// https://leetcode.com/problems/the-kth-factor-of-n/?envType=study-plan-v2&envId=amazon-spring-23-high-frequency

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> arr;
        arr.push_back(1);
        
        for(int i = 2; i<= n; i++){
            if(n%i == 0){
                arr.push_back(i);
            }
        }
        cout << arr.size() << " "<< k << endl;
        if(arr.size() < k){
            return -1;
        }
        return arr[k-1];
    }
};

int main()
{
    Solution s;
    int ans = s.kthFactor(12, 3);
    cout << ans;
    return 0;
}