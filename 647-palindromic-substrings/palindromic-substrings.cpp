class Solution {
public:
    int countSubstrings(string s) {
        if(s.size()==1) return 1;
        int count=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                string res=s.substr(i,j-i+1);
                string res1=s.substr(i,j-i+1);
                reverse(res1.begin(),res1.end());
                if(res==res1){
                    count++;
                }
            }
        }
        return count;
    }
};