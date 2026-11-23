class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int n=nums.size();
        int peak=0;
        int valley=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1] and nums[i]>nums[i+1]){
                peak+=nums[i];
            }
            if(nums[i]<nums[i-1] and nums[i]<nums[i+1]){
                valley+=nums[i];
            }
        }
        cout<<peak<<endl;
        cout<<valley<<endl;
        return peak-valley;
    }
};