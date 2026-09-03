class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
       // int n = nums1.size() + nums2.size();
        set<int>st;
        for(int i = 0 ; i < nums1.size() ; i++){
         st.insert(nums1[i]) ;
        }
        for(int j = 0; j<nums2.size(); j++){
            st.insert(nums2[j]);
        }
        vector<int>univec(st.begin(), st.end());
        return univec;
    }
};