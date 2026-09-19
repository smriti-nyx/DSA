class Solution {
public:
void subsets(int idx ,vector<int>& nums , vector<int>& ds , vector<vector<int>>& ans ){
    //base case 
     if(idx==nums.size()){ // not > used coz noooo.
      //  ds.push_back(nums[idx]); because ds already contains all the lemnts of nums 
        ans.push_back(ds);
        return ; 
    }
    
    //recursive case 
    ds.push_back(nums[idx]) ; 
    subsets(idx+1 , nums , ds , ans); 

    ds.pop_back(); 
    subsets(idx+1 , nums, ds , ans);
    
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds ; 
        vector<vector<int>>ans ; 
            subsets(0 , nums , ds, ans);
        return ans ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna