class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int n=s.size();
        int counter=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                counter--;
            }else{
                counter++;
            }
            if(counter==0) count++;
        }
        return count;
    }
};