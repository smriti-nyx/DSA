class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //answer range [1,n]
        int n = numbers.size();
        int k = target ; 
        int l = 0 ; 
        int r = n-1 ; 
         while(l<r){
            int sum = numbers[l] +numbers[r] ; 
            if(sum==target){
                return { l+1 , r+1};
            }
            //both less
            else if(sum <k){
                l++; 
            }
            
            //l less r greater
           else{
                r--;
            }
            //r less l greater 
            
         }
         return { };

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna