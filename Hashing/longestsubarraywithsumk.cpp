class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        int n = nums.size();
        int bestlen = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int sum = 0; 
                for (int m = i; m < j + 1; m++) {
                    sum += nums[m];
                }
                if (sum == k) {
                    bestlen = max((j - i + 1), bestlen);
                }
            }
        }
        return bestlen;
    }
};
