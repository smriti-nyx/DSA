class Solution {
public:
    bool checkIthBit(int n, int i) {
        if((n & (1<<i)) != 0){
            return true ; 
        }else{
            return false ; 
        }
    }
};