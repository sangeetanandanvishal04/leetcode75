#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    Solution sol;
    sol.rotate(matrix);

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