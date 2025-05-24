#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            if(nums[i] > 0){
                break;
            }
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            
            int low = i+1, high = n-1;
            while(low < high){
                int sum = nums[i] + nums[low] + nums[high];

                if(sum == 0){
                    result.push_back({nums[i], nums[low], nums[high]});
                    low++;

                    while(nums[low] == nums[low-1] && low<high){
                        low++;
                    }
                }
                else if(sum < 0){
                    low++;
                }
                else{
                    high--;
                }
            }
        }

        return result;
    }
};

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    Solution sol;

    vector<vector<int>> result = sol.threeSum(nums);
    int n = result.size();
    cout << '[';
    for(int i=0; i<n; i++){
        cout << '[';
        for(int j=0; j<result[i].size(); j++){
            cout << result[i][j];
            if(j < result[i].size()-1){
                cout << ", ";
            }
        }
        cout << ']';
        if(i < n-1){
            cout << ", ";
        }
    }
    cout << ']' << endl;

    return 0;
}