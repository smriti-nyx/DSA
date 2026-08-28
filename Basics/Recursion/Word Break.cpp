class Solution {
public:
bool solve(int idx , string s,unordered_set<string>&dict){
    //base case 
    if(idx == s.length()){
        return true ; 
    }

    //recursive case 
    string temp = "";
    for(int i = idx ; i <s.length() ; i++){
        temp += s[i] ; 


        //check1 
        if(dict.count(temp)){

           if(solve(i +1 , s,dict)){
            return true ; 
           }
        }
    }
    return false ; 
}
    bool wordBreak(string s, vector<string>& wordDict) {
       unordered_set<string>dict(wordDict.begin() , wordDict.end()) ; 
       return solve( 0 ,s ,dict) ; 
    }

};