#include <bits/stdc++.h>
#include <stack>
using namespace std;

int longestValidParentheses(string s) {
        int res=0;
        stack<int> st;
        st.push(-1);
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(')
                 st.push(i);
            else{
                st.pop();
            if(st.empty())
                st.push(i);
            else
                res=max(res, i-st.top());
            } 
        }
        return res;
    }

int main() {
	// your code goes here
	string s;
	cin>>s;
	cout<< longestValidParentheses(s);
	
	return 0;
}
