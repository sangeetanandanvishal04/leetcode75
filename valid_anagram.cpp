#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp;
        int n = s.length();
        int m = t.length();

        if(n != m){
            return false;
        }

        for(char ch: s){
            mpp[ch]++;
        }

        for(char ch: t){
            if(mpp.find(ch) == mpp.end()){
                return false;
            }

            mpp[ch]--;
            if(mpp[ch] == 0){
                mpp.erase(ch);
            }
        }

        return true;
    }
};

int main(){
    Solution sol;
    string s =  "anagram";
    string t = "nagaram";

    bool result = sol.isAnagram(s, t);
    cout << result << endl;
    return 0;
}