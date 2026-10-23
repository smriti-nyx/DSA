class Solution {
public:
    int romanToInt(string s) {
        int sum = 0 ; 
        unordered_map<char , int > mpp = {
            {'I' , 1},
            {'V' , 5},
            {'X' , 10},
            {'L' , 50}, 
            {'C' , 100}, 
            {'D' , 500} , 
            {'M' , 1000}
        } ; 
        for(int i = 0 ; i <s.length() ; i++){//it gives the char itself 
            if(i<s.length()-1 &&mpp[s[i]]<mpp[s[i+1]]){
                sum-=mpp[s[i]];
            }else{
                sum+= mpp[s[i]] ;
            }
           
        }

    return sum ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna