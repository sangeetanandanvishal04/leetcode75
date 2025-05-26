#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix){
        int m = matrix.size();
        int n = matrix[0].size();

        int left = 0, right = n-1;
        int top = 0, bottom = m-1;

        vector<int> result;
        while(top <= bottom && left <= right){
            for(int i=left; i<=right; i++){
                result.push_back(matrix[top][i]);
            }
            top++;

            for(int i=top; i<=bottom; i++){
                result.push_back(matrix[i][right]);
            }
            right--;

            if(left <= right){
                for(int i=right; i>=left; i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if(top <= bottom){
                for(int i=bottom; i>=top; i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return result;
    }
};

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    Solution sol;

    vector<int> result = sol.spiralOrder(matrix);

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