class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int , int > mpp ; //num : count 
        int n = nums.size() ; 
        bool result = false ; 
        for(int i = 0 ; i <n ; i++){
            if(mpp.find(nums[i])==mpp.end()){
                mpp[nums[i]] = i ; 
            }else{
                result = true ; 
            }

        }
        return result ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna