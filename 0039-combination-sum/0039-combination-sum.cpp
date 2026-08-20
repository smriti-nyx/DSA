#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
void findcombination(int idx , vector<int>&ds , int target , vector<int>& arr , vector<vector<int>>&ans){
    if(idx == arr.size()){ //base case
        if(target == 0){
            ans.push_back(ds);
            
        }
        return ; 
    }

    if(arr[idx] <= target){
        ds.push_back(arr[idx]); //picked the element
        findcombination(idx ,ds , target - arr[idx] , arr , ans ); //tried to add dthe same element again
        ds.pop_back() ; //deleted it from ds if condn not satisfied 
    }
    findcombination(idx+1 , ds, target , arr , ans) ; // then moveing to the next index
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans ;
        vector<int>ds ;
        findcombination( 0 , ds , target ,candidates ,  ans);
        return ans ; 


   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna