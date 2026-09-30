class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        string res="";
        stack<string>stk;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                stk.push(res);
                res="";
            }
            else if(s[i]==')'){
                reverse(res.begin(),res.end());
                res=stk.top()+res;
                stk.pop();
            }
            else{
                res=res+s[i];
            }
        }
        return res;
    }
};