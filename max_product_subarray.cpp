#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxProduct(vector<int>& nums){
        int n = nums.size();
        int maxProduct = nums[0];
        int minProduct = nums[0];
        int globalMax = nums[0];

        for(int i=1; i<n; i++){
            int PrevMax = maxProduct;
            int PrevMin = minProduct;

            maxProduct = max(nums[i], max(PrevMax*nums[i], PrevMin*nums[i]));
            minProduct = min(nums[i], min(PrevMax*nums[i], PrevMin*nums[i]));

            globalMax = max(globalMax, maxProduct);
        }

        return globalMax;
    }
};

int main(){
    vector<int> nums = {2,3,-2,4};
    Solution sol;

    int result = sol.maxProduct(nums);
    cout << result << endl;
    
    return 0;
}