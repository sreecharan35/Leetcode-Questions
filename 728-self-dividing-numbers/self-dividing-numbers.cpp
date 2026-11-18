class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++){
            int s=i;
            bool res=true;
            while(s!=0){
                int last=s%10;
                if(last==0 or i%last!=0){
                    res=false;
                    break;
                }                                
                s=s/10;
            }
            if(res) v.push_back(i);
        }
        return v;
    }
};