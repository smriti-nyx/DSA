class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int , int > seen ; 
        vector<int>result ; 
        int cnt = 0 ; 

        //going n adding elements from1 and adding in map 
        for(int i = 0 ; i <nums1.size() ; i++){
            if(seen.find(nums1[i])==seen.end()){
                seen[nums1[i]]=1 ; 
            }else if(seen.find(nums1[i])!=seen.end()){
                seen[nums1[i]]++; 
            }
        }
        //checking if the element is in nums2 
        for(int j = 0 ; j <nums2.size(); j++){
            if(seen.find(nums2[j])!=seen.end()&& seen[nums2[j]]!=0){
                result.push_back(nums2[j]); 
                seen[nums2[j]] -=1 ; 
            }
        }
        return result ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna