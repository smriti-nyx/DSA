class Solution {
  public:
    void printNumbers(int n) {
        
        
        if(n ==0) return ; //base case
        //if condn not met , do this :
        cout<<n<<"\n" ;
        printNumbers( n-1);
        

    }
};

