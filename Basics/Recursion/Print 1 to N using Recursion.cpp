lass Solution {
  public:
    void printNumbers(int n) {
        
        
        if(n ==0) return ; //base case
        //if condn not met , do this :
        printNumbers( n-1);
        cout<<n<<"\n" ;

    }
};