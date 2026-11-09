class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()==2) return nums;
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<int>v;
        for(auto i:mp){
            if(i.second==1){
                v.push_back(i.first);
                if(v.size()==2){
                    return v;
                }
            }
        }
        return v;
    }
};