#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums){
        unordered_set<int> st;
        for(int num: nums){
            if(st.find(num) != st.end()){
                return true;
            }
            
            st.insert(num);
        }

        return false;
    }
};

int main(){
    vector<int> nums = {1, 3, 4, 2, 3};
    Solution sol;

    bool result = sol.containsDuplicate(nums);
    cout << result << endl;

    return 0;
}