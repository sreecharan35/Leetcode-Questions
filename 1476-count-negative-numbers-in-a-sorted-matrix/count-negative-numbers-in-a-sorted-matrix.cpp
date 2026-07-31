class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int res=0;
        for(int i=0;i<n;i++){
            int s=grid[i].size();
            for(int j=0;j<s;j++){
                if(grid[i][j]<0){
                    res++;
                }
            }
        }
        return res;
    }
};