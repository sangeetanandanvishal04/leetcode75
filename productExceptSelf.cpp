#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int n = nums.size();
        vector<int> result(n, 1);

        for(int i=1; i<n; i++){
            result[i] = result[i-1]*nums[i-1];
        }
        
        int suffix = 1;
        for(int i=n-1; i>=0; i--){
            result[i] *= suffix;
            suffix *= nums[i];
        }

        return result;
    }
};

int main(){
    vector<int> nums = {1,2,3,4};
    Solution sol;

    vector<int> result = sol.productExceptSelf(nums);

    int n = result.size();
    cout << '[';
    for(int i=0; i<n; i++){
        cout << result[i];
        if(i < n-1){
            cout << ", ";
        }
    }
    cout << ']';

    return 0;
}