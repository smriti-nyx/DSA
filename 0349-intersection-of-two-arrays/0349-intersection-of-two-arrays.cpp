class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int , int >seen ; 
        vector<int>result ; 

      for(int i = 0 ; i <nums1.size(); i++){
        if(seen.find(nums1[i])==seen.end()){
            seen[nums1[i]] = 1 ;
        }
      }
      for(int j=0 ;j<nums2.size();j++){
        if(seen.find(nums2[j])!=seen.end()&&seen[nums2[j]]==1){//in the dict but not in result array
            result.push_back(nums2[j]);
            seen[nums2[j]]=0;//0 says that it is in the result array
        }
      }
       return result ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna