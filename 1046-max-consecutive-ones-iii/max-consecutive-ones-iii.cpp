class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        int z=0;
        int ans=0;
        while(j<n){
            if(nums[j]==0){
                z++;
            }
            if(z>k){
                if(nums[i]==0) z--;
                i++;
            }            
            ans=max(ans,j-i+1);
            j++;
            
        }
        return ans;
        // int maxlen=0;
        // for(int i=0;i<n;i++){
        //     int zeros=0;
        //     for(int j=i;j<n;j++){
        //         if(nums[j]==0){
        //             zeros++;
        //         }
        //         if(zeros<=k){
        //             int len=(j-i)+1;
        //             maxlen=max(maxlen,len);
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }
        // return maxlen;
    };
};