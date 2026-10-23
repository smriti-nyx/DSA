class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() ; 
        int count = n/2 ; 
        int cnt = 0 ; 
        unordered_map<int,int> mpp; 
        for(int i = 0 ; i < n ; i++){
            mpp[nums[i]]++ ; 
        }
        //which elementt appears first 
        //int currentcount =0 ; 
       // int bestcount = 0 ; 
        for(auto& pair : mpp){
            if(pair.second>n/2){
                return pair.first;
            }
        }
        return -1 ; 
    }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna