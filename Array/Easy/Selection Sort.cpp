class Solution {
public:
//selection sort : select 1 ,compare w all , swap 2.
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();
      for(int i = 0 ; i< n ; i++){
        int min = i ; 
        for(int j = i ; j <= n-1; j++){ //here n-1 because when you start from i, num of elemnt is always the size -1.
            if(nums[j]<nums[min])
            swap(nums[min] , nums[j]);
        }
      }
      return nums ; 
    }
};
