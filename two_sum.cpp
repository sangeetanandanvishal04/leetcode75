#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target){
        int n = nums.size();
        unordered_map<int, int> mp;

        for(int i=0; i<n; i++){
            int need = target - nums[i];
            if(mp.find(need) != mp.end()){
                return {mp[need], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};

int main(){
    vector<int> nums = {2, 7, 9, 11};
    int target = 9;
    Solution sol;

    vector<int> result = sol.twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}