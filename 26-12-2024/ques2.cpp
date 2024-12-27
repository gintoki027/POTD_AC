class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int prev = 0;
        int result = 0;
       
        for(int i = 0;i<n;i++){
            int current = 0;
            for(char& ch : bank[i]){
                if(ch=='1'){
                    current++;
                }   
            }
            result+= (prev*current);
            if(current!=0){
                prev = current;
            }
        }
        return result;
    }
};