#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();

        int l=0, r=0;
        unordered_map<char, int> mpp; //{char: cnt}
        int maxCnt = 0, maxLen = 0;

        while(r < n){
            mpp[s[r]]++;
            maxCnt = max(maxCnt, mpp[s[r]]);

            if(((r-l+1) - maxCnt > k) && (l <= r)){
                mpp[s[l]]--;
                maxCnt = 0;
                for(auto it: mpp){
                    int cnt = it.second;
                    maxCnt = max(maxCnt, cnt);
                }

                l++;
            }

            if((r-l+1) - maxCnt <= k){
                maxLen = max(maxLen, r-l+1);
            }

            r++;
        }

        return maxLen;
    }
};

int main(){
    Solution sol;
    string s = "AABABBA";
    int k = 1;

    int result = sol.characterReplacement(s, k);
    cout << result << endl;
    return 0;
}