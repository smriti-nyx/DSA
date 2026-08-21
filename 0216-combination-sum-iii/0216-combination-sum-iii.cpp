class Solution {
public:


 void findsum(int k , int n, vector<int>&ds , vector<vector<int>>&ans ,int idx){
    if(k ==0 && n != 0){
       // ds.pop_back(idx) ;
        return ; 
    }
if(n == k && n == 0){
    ans.push_back(ds);
return ; 

} 

    for(int i = idx ; i<10 ; i++){
        
 ds.push_back(i) ; 
   findsum(k-1 , n -i , ds , ans ,i +1) ; // I passed idx+1 earlier , which got me th ew rong answer, should be i+1 instead
   ds.pop_back();
  
    }
    
 }


    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans ; 
        vector<int>ds ; 
        findsum( k , n , ds , ans ,1); 
        return ans ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna