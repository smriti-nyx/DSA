class Solution {
public:
//BRUTE FORCE
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(); 
        k=k%n;

        // 1,2,3,4 moved in temp 
        vector<int>temp(n-k) ;
        for(int i = 0; i <n-k; i ++){
            temp[i] =nums[i] ; //temp[0] = nums[4] ,1-5, 2-6 ,k =3 
        }
         
         //5,6,7 moved frontow
        for(int i = n-k ; i <n ; i++){
            nums[i - (n-k)] = nums[i];
           // 0-4, 1-5 , 2-6 
        }
        //adding 1, 2,3,4 back to nums at 3,4,5,6
        for(int i = k ; i <n; i++){
           nums[i] =temp[i-k];
           //6-3 , 4 n-i , 6-3 , 6-2
        }
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna