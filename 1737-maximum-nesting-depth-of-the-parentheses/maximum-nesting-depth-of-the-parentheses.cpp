class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int high=0;
        for(char i:s){
            if(i=='('){
                count++;
            }else if(i==')'){
                // if(count>=high){
                //     high=count;
                // }
                high=max(high,count);
                count--;
            }
        }
        return high;
    }
};