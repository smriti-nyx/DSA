class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        int n = nums.size();
        int bestlen = 0;
        int sum = 0 ;

        for (int i = 0; i < n; i++) {
            sum =0;
            for (int j = i; j < n; j++) {
                sum+= nums[j];
                //int sum = 0; // Reset sum here so it only calculates for the current subarray [i...j]
                if (sum == k) {
                    bestlen = max((j - i + 1), bestlen);
                }
            }
        } // Added missing closing brace for the outer loop
        return bestlen;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna