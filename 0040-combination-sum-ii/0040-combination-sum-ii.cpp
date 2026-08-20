class Solution {
public:
void findcombination(int idx , vector<int>&arr , vector<vector<int>>&ans , vector<int>&ds , int target){
    //if(idx == arr.size()){
        if(target == 0 ){
            ans.push_back(ds) ;
       // }
        return ; 
    }
    for(int i = idx ; i <arr.size(); i++){
        if(i>idx && arr[i-1] == arr[i]) continue ; 
        if(arr[i] > target) break ;
    
    ds.push_back(arr[i]) ; 
    findcombination(i+1 ,arr , ans , ds, target-arr[i]) ;
    ds.pop_back() ;
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<vector<int>>ans ; 
        vector<int>ds;
        sort(candidates.begin() , candidates.end()) ;
        findcombination( 0 , candidates , ans ,ds , target);
        return ans ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna