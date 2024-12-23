class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> vec(101,0);
        vector<int> result;
        int SIZE = nums.size();
        for(int i =0;i<SIZE;i++){
            vec[nums[i]]++;
        }
        for(int j=1;j<101;j++){
            vec[j]=vec[j-1]+vec[j];
        }
        for(int k=0;k<SIZE;k++){
            if(nums[k]==0){
                result.push_back(0);
            }else{
            result.push_back(vec[nums[k]-1]);
        }}
        return result;
    }

};