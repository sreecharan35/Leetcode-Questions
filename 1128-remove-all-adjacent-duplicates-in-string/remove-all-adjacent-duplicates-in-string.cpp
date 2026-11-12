class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stk;
        for(char i:s){
            if(!stk.empty() and stk.top()==i){
                stk.pop();
            }else{
                stk.push(i);
            }
        }
        string res;
        while(!stk.empty()){
            res+=stk.top();
            stk.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};