class Solution {
public:
    bool help(int a){
        if(a<=1) return false;
        for(int i=2;i*i<=a;i++){
            if(a%i==0){
                return false;
            }
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
            int high=INT_MIN;
            int low=INT_MAX;
            int n=nums.size();
            for(int i=0;i<n;i++){
                if(help(nums[i])){
                    high=max(high,i);
                    low=min(low,i);
                }
            }
            cout<<high<<" "<<low<<endl;
            return abs(high-low);
    }
};