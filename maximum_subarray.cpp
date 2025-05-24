#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxSubArray(vector<int>& nums){
        int n = nums.size();
        int maxSum = nums[0];
        int curSum = nums[0];

        for(int i=1; i<n; i++){
            curSum = max(curSum+nums[i], nums[i]);
            maxSum = max(maxSum, curSum);
        }

        return maxSum;
    }
};

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution sol;

    int result = sol.maxSubArray(nums);
    cout << result << endl;
    
    return 0;
}