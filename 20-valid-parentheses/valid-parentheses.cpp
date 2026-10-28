class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        for(int i=0;i<s.size();i++){
            char chr=s[i];
            if(chr=='[' or chr=='(' or chr=='{'){
                stk.push(chr);
            }else{
                if(stk.empty()){
                    return false;
                }
                char top_char=stk.top();
                stk.pop();
                if(top_char=='(' and chr==')' or top_char=='{' and chr=='}' or top_char=='[' and chr==']' ){
                    continue;
                }else{
                    return false;
                }
            }
        }
        return stk.empty();
    }
};