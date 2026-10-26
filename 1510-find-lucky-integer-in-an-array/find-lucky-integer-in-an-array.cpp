class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        vector<int>v;
        for(int x:arr){
            mp[x]++;
        }
        int res= -1;
        for(auto [s,i]:mp){
            if(s==i){
                res=max(res,s);
            }
        }
        return res;
    }
};