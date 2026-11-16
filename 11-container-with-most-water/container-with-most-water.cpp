class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int res=0;
        while(i<j){
            int mini=min(height[i],height[j]);
            int width=j-i;
            int area=mini*width;
            res=max(res,area);
            if(height[i]<height[j]) i++;
            else if(height[i]>height[j]) j--;
            else{
                i++;
                j--;
            }
        }
        return res;
    }
};