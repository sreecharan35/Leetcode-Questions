class Solution {
public:
    int minMoves(vector<int>& nums) {
        int large=INT_MIN;
        for(int i:nums){
            if(large<i){
                large=i;
            }
        }
        int res=0;
        for(int i:nums){
            if(i!=large){
                res+=(large-i);
            }
        }
        return res;
    }
};