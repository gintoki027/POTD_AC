class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    
        vector<vector<int>> arr(m);
     
        if(original.size() != n*m){
            return {};
        }
       
        for (int i = 0; i < m; ++i) {
            arr[i] = vector<int>(original.begin() + i * n, original.begin() + (i + 1) * n);
        }
        return arr;
    }
};