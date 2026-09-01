class Solution {
public:
//BRUTE FORCE
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(); 
        k=k%n;
       
         if(k==0|| k == n ) return ; 
       //reversing the entire array
       reverse(nums.begin() , nums.end()) ;


       // 0-3 
       reverse(nums.begin()+0, nums.begin() +k ) ;

       //reversing 4-6 
       reverse(nums.begin() + k , nums.begin()+(n-1)+1);
                                   //or nums.end()
       ; 
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna