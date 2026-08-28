class Solution {
public:
bool solve(int idx , int m , int n , int i , int  j ,string word , vector<vector<char>>& board){
//base case 
if(idx>=word.length()){
    return true ; 
}
//base case.2 , checking boundaries 
if(i<0||j<0||i>=m || j>=n|| board[i][j] !=word[idx]||board[i][j] == '$'){
    return false ;
}
//recursive case 
char temp = board[i][j] ;//storing current word in temp
board[i][j] ='$'; //marking it visited
//then moving forward
bool found = solve(idx+1, m, n ,i+1 ,j,word , board)||
              solve(idx+1, m, n ,i-1 ,j ,word , board)||
              solve(idx+1, m, n ,i,j+1,word , board)||
              solve(idx+1, m, n ,i,j-1,word , board);
board[i][j] = temp ; //backtracking 
return found; 
           
}


    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size() ;
        int n = board[0].size() ;

        for(int i = 0 ; i <m ; i++){
            for(int j = 0 ; j<n;j++){
                if(board[i][j] ==word[0]){
                    if(solve(0 ,m ,n ,i,j,word ,board)){
                        return true ;
                    }
                }
            }
        }
       return false ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna