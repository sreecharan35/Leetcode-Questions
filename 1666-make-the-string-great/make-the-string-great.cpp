class Solution {
public:
    string makeGood(string s) {
        int i=0;
        int j=1;
        while(j<s.size()){
            if(s[i] != s[j] and tolower(s[i])==tolower(s[j])){                
                s.erase(i,2);
                i=0;
                j=1;
            }else{
                i++;
                j++;
            }
        }
        return s;

    }
};