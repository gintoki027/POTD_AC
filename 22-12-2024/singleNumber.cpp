class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int num : nums){
            count[num]++;
        }
        for(auto& i : count){
            if(i.second==1){
                return i.first;
            }
        }
        return -1;
    }
};