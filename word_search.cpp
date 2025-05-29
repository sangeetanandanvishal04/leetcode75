#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool dfs(int i, int j, int idx, vector<vector<char>>& board, string word){
        if(idx == word.size()){
            return true;
        }

        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[idx]){
            return false;
        }
        
        char temp = board[i][j];
        board[i][j] = '#';

        bool found = dfs(i-1, j, idx+1, board, word) ||
                     dfs(i+1, j, idx+1, board, word) || 
                     dfs(i, j-1, idx+1, board, word) || 
                     dfs(i, j+1, idx+1, board, word); 

        board[i][j] = temp;
        return found;             
    }    
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j] == word[0] && dfs(i, j, 0, board, word)){
                    return true;
                }
            }
        }

        return false;
    }
};

int main(){
    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word = "ABCCED";
    Solution sol;
    bool result = sol.exist(board, word);
    cout << result << endl;

    return 0;
}