class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==0){
                continue;
            }else if(nums[i]==1){
                result++;
            }else if(nums[i]==2){
                result++;
            }else{
                if((nums[i]+1)%3==0){
                    result++;
                }else{
                    result++;
                }
            }
        }
        return result;
    }
};