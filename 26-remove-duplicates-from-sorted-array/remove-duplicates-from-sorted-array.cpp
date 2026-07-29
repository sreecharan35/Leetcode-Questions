class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j = 1; j < nums.size(); j++) {

            if(nums[j] != nums[i]) {
                i++;
                // swap(nums[i],nums[j]); 
                 int temp=nums[j]; //<-- insted of this swap
                nums[j]=nums[i];
                nums[i]=temp;
            }
        }

         return i+1
         ;
    }
};