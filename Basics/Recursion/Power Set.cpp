class Solution {
public:	
void powset(int idx , vector<int>&nums , vector<int>& ds , vector<vector<int>>&ans){
    //base case 
    if(idx >= nums.size()){
        ans.push_back(ds);
        return ; 
    }

    // recursive case 
    ds.push_back(nums[idx]) ;
    powset(idx +1 , nums ,ds , ans) ;
    ds.pop_back() ; 
    powset(idx+1 , nums , ds , ans);

}
    vector<vector<int> > powerSet(vector<int>& nums) {
        vector<int>ds ; 
        vector<vector<int>>ans ; 
        powset( 0 , nums , ds , ans ) ;
        return ans ; 
    }
};