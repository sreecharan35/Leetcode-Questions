class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int res=1;
        int up=1;
        int down=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                up++;
            }else{
                up=1;
            }

            if(nums[i-1]>nums[i]){
                down++;
            }else{
                down=1;
            }
            res=max({up,res,down});
        }
        return res;

    }
};