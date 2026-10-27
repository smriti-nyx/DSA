class Solution {
public:
//better Solution
    int longestSubarray(vector<int> &nums, int k) {
        int n = nums.size();
        int bestlen = 0;
        int sum = 0 ;

        for (int i = 0; i < n; i++) {
            sum =0;
            for (int j = i; j < n; j++) {
                sum+= nums[j];
                if (sum == k) {
                    bestlen = max((j - i + 1), bestlen);
                }
            }
        } 
        return bestlen;
    }
};
