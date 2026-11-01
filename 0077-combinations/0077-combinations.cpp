class Solution {
public:
void  combos(int n , int k , int idx , vector<int>&ds , vector<vector<int>>&ans, vector<int>&nums){
    //base case
    if(ds.size() == k ){
        ans.push_back(ds); 
        return ; 
    }
    if(idx>=nums.size()){
        return ; 
    }
    //recursive case 
    ds.push_back(nums[idx]);
    combos(n , k , idx+1 , ds , ans , nums) ; 
    ds.pop_back(); 
    combos( n , k , idx+1 , ds, ans , nums);
    //return ans ; 


}
    vector<vector<int>> combine(int n, int k) {
        vector<int>ds ; 
        vector<vector<int>>ans;
        vector<int>nums(n);
        for(int i =0 ; i <n ; i++){
            nums[i] = i+1; 
        }
        if(n ==1){
            return {{1}}; 
        }
        combos(n , k , 0 , ds ,ans, nums);
        return ans ; 
    }
};
//didn't get [1, 2] and [2, 1] because your backtracking algorithm builds combinations by always moving forward in the array (idx + 1), which ensures that numbers are only ever chosen in strictly increasing order.

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna