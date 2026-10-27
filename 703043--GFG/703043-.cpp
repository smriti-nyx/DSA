class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        map<long long , int > presummpp ; 
        int sum =0; 
        int bestlen = 0 ; 
        
        int n = nums.size(); 
        for(int i = 0 ; i < n ; i ++){
            sum+= nums[i] ; 
            if(sum == k ){
            bestlen = max(bestlen , i+1);
            }
           ///if not
            
            long long  rem = sum - k ; 
            if(presummpp.find(rem)!=presummpp.end()){
                int len = i - presummpp[rem]; 
                 bestlen = max(len , bestlen); 

            }
            //ading the prefix sums to the hashmap 
        if(presummpp.find(sum) == presummpp.end()){
            presummpp[sum] = i ; //key and value pair creation where i is the ke
        }
    
        }
        return bestlen ; 
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna