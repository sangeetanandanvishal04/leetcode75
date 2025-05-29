#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0;
        int maxLen = 0;
        unordered_map<char, int> mp;

        for(int r=0; r<n; r++){
            if(mp.find(s[r]) != mp.end()){
                l = max(l, mp[s[r]]+1);
            }

            maxLen = max(maxLen, r-l+1);
            mp[s[r]] = r;
        }

        return maxLen;
    }
};

int main(){
    string s = "abcabcbb";
    Solution sol;
    int result = sol.lengthOfLongestSubstring(s);
    cout << result << endl;

    return 0;
}