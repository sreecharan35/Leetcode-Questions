class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        set<int>s(nums.begin(),nums.end());
        // int n=nums[nums.length()-1];
        for(int i=1;i<=nums.size();i++){
            if(s.find(i)==s.end()){
                v.push_back(i);
            }
        }
        return v;
    }
};