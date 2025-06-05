#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int expandAroundCenter(string s, int l, int r, int n){
        int cnt = 0;
        while(l>=0 && r<n && s[l] == s[r]){
            cnt++;
            l--;
            r++;
        }

        return cnt;
    }    
public:
    int countSubstrings(string s) {
        int n = s.length();
        int res = 0;

        for(int i=0; i<n; i++){
           res += expandAroundCenter(s, i, i, n);
           res += expandAroundCenter(s, i, i+1, n); 
        }

        return res;
    }
};

int main(){
    Solution sol;
    string s = "aaa";

    int ans = sol.countSubstrings(s);
    cout << ans << endl;
    return 0;
}