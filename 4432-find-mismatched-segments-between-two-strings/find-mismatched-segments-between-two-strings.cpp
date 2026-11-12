class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        if(s1==s2){
            return {};
        } 
            
        int n=s1.size();
        vector<vector<string>>v;
        string sub1="";
        string sub2="";
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                sub1+=s1[i];
                sub2+=s2[i];
            }
            else if((sub1.size()!=0 and sub2.size()!=0)){
                v.push_back({sub1,sub2});
                sub1="";
                sub2="";
            }else{
                continue;
            }
        }
        if(sub1.size()!=0){
            v.push_back({sub1,sub2});
        }
        return v;
    }
};