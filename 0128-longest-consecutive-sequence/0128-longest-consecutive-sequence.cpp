class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       //optimal approach 
        int n = nums.size();
        if(n==0){
            return 0 ; 
        }
        int longest =1 ; 
         
        unordered_set<int> st(nums.begin() , nums.end());
        for(auto it :st){
            if(st.find(it-1)==st.end()){
                int x = it ; 
                int cnt = 1 ;
                while(st.find(x+1)!=st.end()){
                    x = x+1 ; 
                    cnt++ ; 
                }
                longest = max(cnt , longest) ; 
            }

//ranslates to: "Is the number it - 1 not present in the set?"
            //st.find(it - 1): This searches your unordered_set (st) for the number immediately before the current number (it - 1).
        }
        return longest ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna