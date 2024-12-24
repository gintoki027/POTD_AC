class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count1=0,count2=0,count0=0;
        int s = nums.size();
        for(int i=0;i<s;i++){
            if(nums[i]==0){
                count1++;
            }else if(nums[i]==2){
                count2++;
            }else{
                count0++;
            }
        }
        int index = 0;
        for(int i=0;i<count0;i++){
            nums[index++]=0;
        }
        for(int j=0;j<count1;j++){
            nums[index++]=1;
        }
        for(int k=0;k<count2;k++){
            nums[index++]=2;
        }
    }
};