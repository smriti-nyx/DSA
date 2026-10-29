class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char , string> mpp1 ; 
        map<string , char> mpp2 ; 
        //split the string s into individual words 
        stringstream ss(s);
        string word ; 
        vector<string> words ; 
        while(ss>>word){
            words.push_back(word);
        }
        if(pattern.length() != words.size()){
            return false ; 
        }

        for(int i = 0 ; i <pattern.length() ; i ++){
            char c = pattern[i] ; 
            string t = words[i] ; 
        if(mpp1.count(c)&&mpp1[c]!=t||mpp2.count(t)&&mpp2[t]!=c){
            return false ; 
        }
        mpp1[c] = t ; 
        mpp2[t] = c ; 
        }
        return true ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna