class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++){
            if(nums[i]==s){
                s++;
            }                
        }
        return s;
    }
};