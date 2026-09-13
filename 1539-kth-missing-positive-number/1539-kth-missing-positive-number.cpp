class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        //int low = 1 ; 
        //int i =1;
        int high = k+ *max_element(arr.begin() , arr.end());
        

        //while(low<=high){
        //int mid = (low+high)/2; 
        for(int i =0 ; i <arr.size(); i ++){
            if(arr[i] <=k){
                k++;
            }
        }
        return k;


       // }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna