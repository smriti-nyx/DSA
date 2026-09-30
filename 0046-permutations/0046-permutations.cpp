class Solution {
public:
void backtrack(vector<int>& ds , vector<vector<int>>& ans , vector<int>& nums ,vector<bool>& freq ){
    //base case 
    if(ds.size() == nums.size()){
        ans.push_back(ds);
        return ; 
    }
    //freq[i] == false nums[i] is free to be picked 
    //freq[i] == true nums[i] is already int he current branch 
    //recursive case 
    for(int i = 0 ; i <nums.size() ; i++){
        if(!freq[i]){//freq[i] == false 
        freq[i] = true ; 
        ds.push_back(nums[i]);

        backtrack(ds , ans ,nums , freq) ;
        ds.pop_back() ; 
        freq[i] = false ; 

        }
    }
}

    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>>ans ;
         vector<int>ds ; 
         vector freq(nums.size() , false );
        
         backtrack(ds,ans , nums , freq); 
         return ans ; 
            //nums = [1, 2]ds = [] ,freq = [false, false]
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna