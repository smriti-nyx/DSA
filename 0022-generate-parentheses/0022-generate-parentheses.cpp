class Solution {
public:
void parent(int n , vector<string>&result, int open , int close , string& curr){
if(curr.length() == 2*n){
    result.push_back(curr);
    return ; 
}

if(open <n){
    curr.push_back('(');
 parent( n , result , open+1 , close , curr ) ;//choosing the open bracket 
 curr.pop_back() ;
}

if(close<open) {
    curr.push_back(')');
    parent( n , result ,open,  close +1, curr ) ;// choosing the close bracket
    curr.pop_back();
}

}
    vector<string> generateParenthesis(int n) {
        vector<string>result ;
        string curr = "";
        parent(n , result , 0 , 0 , curr);
        return result ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna