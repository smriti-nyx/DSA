class Solution {
  public:
 void findsum(int idx , vector<int>&arr , vector<int>&ds , int sum ){
    if(idx == arr.size()){
        ds.push_back(sum); 
       return ; 
    }
     sum+= arr[idx] ; 
    ds.push_back(sum); 
    findsum(idx+1 , arr ,ds, sum); 
    ds.pop_back();
    sum -= arr[idx] ; 
    findsum(idx+1 , arr , ds, sum) ;

     }
 
    
    vector<int> subsetSums(vector<int>& nums) {
        vector<int>ds;
        findsum(0 , nums , ds , 0) ; 
        sort(ds.begin() , ds.end()) ;
        return ds ; 
    }
};