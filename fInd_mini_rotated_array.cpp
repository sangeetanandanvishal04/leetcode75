#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findMin(vector<int>& nums){
        int n = nums.size();
        int low = 0, high = n-1;

        while(low < high){
            int mid = low + (high - low)/2;

            if(nums[mid] > nums[high]){
                low = mid+1;
            }
            else if(nums[mid] < nums[high]){
                high = mid;
            }
            else{
                high--;
            }
        }

        return nums[low];
    }
};

int main(){
    vector<int> nums = {3,4,5,1,2};
    Solution sol;

    int result = sol.findMin(nums);
    cout << result << endl;
    
    return 0;
}