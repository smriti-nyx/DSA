class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int , int > count ; 
        vector<int>result ; 
        

        for(int nums :nums1){
            count[nums]++; 
        }

        for(int nums:nums2){
            if(count[nums]> 0 ){
                result.push_back(nums);
                count[nums]--; 
            }
        }
        return result ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna