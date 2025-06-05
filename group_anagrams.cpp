#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;

        for(string str: strs){
            string word = str;
            sort(word.begin(), word.end());
            mpp[word].push_back(str);
        }

        vector<vector<string>> result;
        for(auto it: mpp){
            result.push_back(it.second);
        }

        return result;
    }
};

int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    Solution sol;
    vector<vector<string>> result = sol.groupAnagrams(strs);

    cout << "[";
    for(int i=0; i<result.size(); i++){
        cout << "[";
        for(int j=0; j<result[i].size(); j++){ 
            cout << "\"" << result[i][j] << "\""; 
            if(j < result[i].size()-1){ 
                cout << ",";
            }
        }
        
        cout << "]";
        if(i<result.size()-1){
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}