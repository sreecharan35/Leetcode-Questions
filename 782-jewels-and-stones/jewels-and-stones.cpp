class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int>mp;
        int counter=0;
        for(char i:jewels){
            counter+=count(stones.begin(),stones.end(),i);
        }
        return counter;
    }
};