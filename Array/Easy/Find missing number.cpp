class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int sum = 0 ;
        int expectedsum = (n * (n+1))/2 ;
        for(int num :nums){
            sum += num ;
        }

  return expectedsum - sum ;
    }
};