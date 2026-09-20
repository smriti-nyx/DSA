class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size(); // ex = 3 
        int subsets = 1<<nums.size();// ex = 8 . no.of subssets that will be formed 
        // 2^nbinary combinations 
        vector<vector<int>>ans; 
        for(int i = 0 ; i <subsets ; i++){ // 000 , 001 , 010 ,.....
            vector<int>ds;
            for(int j = 0 ; j <n ; j++){ //ex - 0 0 1
                if((i&(1<<j))!=0){
                    ds.push_back(nums[j]) ; 
                }
            } 
                ans.push_back(ds); 
        }
            return ans ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna