class Solution {
public:

void findcombo(int idx , string digits , vector<string>&ans , vector<string>&combos , string s ){
if(digits.size() == idx){
    ans.push_back(s) ; 
    return ;
}
int digit = digits[idx] - '0' ; // ASCII value of 0 is being subtracted so that string can be converted into numeerical value .
for(int i = 0 ; i < combos[digit].size() ; i++){
    //
    findcombo (idx+1 , digits , ans , combos , s +combos[digit][i]);
}





}
    vector<string> letterCombinations(string digits) {
        vector<string>combos = { "" , "" , "abc", "def" , "ghi" ,"jkl" , "mno" , "pqrs" ,"tuv" , "wxyz"} ;
        string s = "" ;
        vector<string>ans ; 
        findcombo(0 , digits , ans ,combos , s);
        return ans ; 

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna