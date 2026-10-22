class Solution {
public:
//better solution.
 vector<int> twoSum(vector<int>& nums, int target) {
   map<int , int> mpp;
   for(int i = 0 ; i<nums.size() ; i++){
    int first = nums[i] ; 
    int second = target - first ; 
    if(mpp.find(second) != mpp.end()){
        return{mpp[second] , i };
    }
    mpp[first] = i ; //stores the first number into the hashtable so that it can be looked up agaib by the other number s'
   }
     
    return {}; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna