class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        int range=nums.size();
        priority_queue<int>v;
        int i=0;
        while(n--){
            v.push(nums[i]);
            i++;
        }
        int res=0;
        for(int i=0;i<=range;i++){
            if(i==k-1){
                res= v.top();
            }else{
                v.pop();
            }
        }
        return res;
    }
};