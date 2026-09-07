class Solution {
public:
    int countOccurrences(vector<int>& arr, int target) {
        // brute approach 
        int n = arr.size();
        int cnt = 0 ; 
        for(int i = 0 ; i<n ; i++){
           if(arr[i] == target){
            cnt++;
           }
        }
        return cnt ; 
    }
};