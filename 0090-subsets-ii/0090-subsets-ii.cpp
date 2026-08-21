class Solution {
public:
     
     void findsubset(int idx , vector<int>&ds , vector<vector<int>>&ans , vector<int>&arr ){
             ans.push_back(ds) ;

      for(int i = idx ; i<arr.size() ;i++){

        if(i!=idx && arr[i-1] ==arr[i]) continue ;
        ds.push_back(arr[i]);
        findsubset(i+1 ,ds, ans, arr) ;
        ds.pop_back();
      }


     }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds ;
        vector<vector<int>>ans ; 
        sort(nums.begin() ,nums.end()) ;
        findsubset(0 , ds , ans , nums) ;
        return ans ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna