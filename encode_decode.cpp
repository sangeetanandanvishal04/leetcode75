#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string encode(vector<string>& strs) {
        string ans = "";
        for(string str: strs){
            ans += to_string(str.length()) + "#" + str;
        }

        return ans;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int n = s.length();
        int i=0, j=0;

        while(i < n){
            j = i;

            while(s[j] != '#'){
                j++;
            }

            int len = stoi(s.substr(i, j-i));
            string val = s.substr(j+1, len);
            i = j+1+len;
            result.push_back(val);
        }

        return result;
    }
};

int main(){
    vector<string> input = {"lint","code","love","you"}; 
    Solution sol;

    string res = sol.encode(input);
    cout << res << endl;

    vector<string> output = sol.decode(res);
    int n = output.size();
    cout << '[';
    for(int i=0; i<n; i++){
        cout << '"' << output[i] << '"'; 
        if(i < n-1){
            cout << ", ";
        }
    }
    cout << ']';

    return 0;
}
