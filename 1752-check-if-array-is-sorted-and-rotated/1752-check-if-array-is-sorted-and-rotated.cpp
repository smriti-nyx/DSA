class Solution {
public:
//iy
    bool check(vector<int>& nums) {
        int n = nums.size() ; 
    
    //always sort n store this way 
       vector<int>og = nums ;
       sort(og.begin() , og.end()) ;
     //B = nums , A = og 

     //to find the index of the minm elemnt 

     int minidx = min_element(nums.begin() , nums.end()) - nums.begin(); //addressof minvalue - address of idx =0 


       for(int i =0 ; i <n;i++){
        if(nums[i] != og[(i+(nums.size() - minidx))%nums.size()]){
            return false ; 
        }
       }
      return true ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://b