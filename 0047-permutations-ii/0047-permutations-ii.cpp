class Solution {
public:
 void combos(vector<bool>&visited , vector<int>&nums ,vector<int>&ds ,  vector<vector<int>>&ans){
      //base case
      if(ds.size()==nums.size()){
        ans.push_back(ds);
        return ; 
      }
     // if(idx>=nums.size()){
      //  return ; 
    //  }

      //recursive case 
      for(int i = 0 ;i <nums.size() ; i++){
        if(visited[i]){
            continue ;
        }
        //ensuring no duplicate arrays 

        visited[i] = true ; 
    
        ds.push_back(nums[i]) ; 
        combos(visited , nums , ds, ans) ; 

        ds.pop_back() ; 
         combos(visited, nums , ds, ans);
         visited[i] = false ; 

      }

        }     
           
    vector<vector<int>> permuteUnique(vector<int>& nums) {
           vector<int>ds;
           vector<vector<int>>ans ; 
           vector<bool>visited(nums.size() , false) ; 
           combos(visited , nums , ds, ans);
           set<vector<int>> unique_ans(ans.begin(), ans.end());
        vector<vector<int>> final_ans(unique_ans.begin  (), unique_ans.end());
        return final_ans;
          
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna