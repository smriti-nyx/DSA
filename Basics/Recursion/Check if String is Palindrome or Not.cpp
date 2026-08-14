class Solution{	
	public:		
		bool palindromeCheck(string& s){
            if(s.size()<=1) return true ; //base case 
           if(s.front() != s.back()) return false ; 

           s.pop_back();
           s.erase(0 , 1) ;
           
           return palindromeCheck(s) ;
		}
};