class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n=rain.size();
        int alice=0;
        int bob=0;
        vector<string>v;
        for(int i=0;i<n;i++){
            if(rain[i]==0){
                v.push_back("None");
            }
            else if(i<n-1 and rain[i]==rain[i+1]==1){
                if(alice<=bob){
                    v.push_back("Alice");
                    alice++;
                }
                else{
                    v.push_back("Bob");
                    bob++;
                }                
            }else{
                    v.push_back("Bob");
                    bob++;
                }
        }
        return v;
    }
};