#include<bits/stdc++.h>
using namespace std;

class Solution {  
public:
    int maxArea(vector<int>& height){
        int l = 0, r = height.size()-1;
        int max_area = (r-l)*min(height[l], height[r]);

        while(l < r){
            int area = (r-l)*min(height[l], height[r]);
            max_area = max(max_area, area);
            
            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }

        return max_area;
    }
};

int main(){
    vector<int> nums = {1,8,6,2,5,4,8,3,7};
    Solution sol;

    int result = sol.maxArea(nums);
    cout << result << endl;
    
    return 0;
}