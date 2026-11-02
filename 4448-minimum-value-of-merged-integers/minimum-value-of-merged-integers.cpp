class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        int sum=INT_MAX;
        for(int i=0;i<n;i+=2){
            string s=to_string(nums[i+1]);
            int res;
            if(s.size()==1){
                 res=(nums[i]*10)+nums[i+1];                
            }
            else if(s.size()==2){
                 res=(nums[i]*100)+nums[i+1]; 
            }
            else if(s.size()==3){
                 res=(nums[i]*1000)+nums[i+1]; 

            }
            else{
                 res=(nums[i]*10000)+nums[i+1]; 
            }
            if(res<sum){
                sum=res;
            }
        }
        return sum;
    }
};