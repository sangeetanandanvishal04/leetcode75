#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch: s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else if(st.empty()){
                return false;
            }
            else if((ch == ')' && st.top() != '(') ||
                    (ch == '}' && st.top() != '{') ||
                    (ch == ']' && st.top() != '[')){
                        return false;
            }
            else{
                st.pop();
            }
        }

        return st.empty();
    }
};

int main(){
    Solution sol;
    string s = "()[]{}";

    bool result = sol.isValid(s);
    cout << result << endl;
    
    return 0;
}