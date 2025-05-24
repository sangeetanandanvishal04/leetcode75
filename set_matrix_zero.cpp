#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void setZeroes(vector<vector<int>>& matrix){
        int m = matrix.size();
        int n = matrix[0].size();

        vector<pair<int, int>> loc;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    loc.push_back({i, j});
                }
            }
        }

        for(const auto& p : loc){
            int row = p.first;
            int col = p.second;

            for(int i=0; i<m; i++){
                matrix[i][col] = 0;
            }
            for(int j=0; j<n; j++){
                matrix[row][j] = 0;
            }
        }
    }
};

int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};

    Solution sol;
    sol.setZeroes(matrix);

    cout << "[";
    for(int i=0; i<matrix.size(); i++){
        cout << "[";
        for(int j=0; j<matrix[0].size(); j++){
            cout << matrix[i][j];
            if(j < matrix[0].size()-1){
                cout << ",";
            }
        }
        
        cout << "]";
        if(i<matrix.size()-1){
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}