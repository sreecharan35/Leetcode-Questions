class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        long long dupli=0;
        if(x<0){
            return false;
        }
        while(x!=0){
            int s=x%10;
            dupli=(dupli*10)+s;
            x=x/10;
        }
        if(original==dupli){
            return true;
        }else{
            return false;
        }
    }
};