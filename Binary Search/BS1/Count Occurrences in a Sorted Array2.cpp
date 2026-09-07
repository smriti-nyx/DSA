class Solution {
public:
    int countOccurrences(vector<int>& arr, int target) {
        // binary search approach 

     //arr[i] == target lb up bound -1 
     int lb = lower_bound(arr.begin(),arr.end(),target) -arr.begin();

     int ub = upper_bound(arr.begin() ,arr.end(),target) -arr.begin();

     return ub-lb ; 
       
    }
};