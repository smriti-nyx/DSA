class Solution{
public:
    void reverse(int arr[], int n){
        if(n<=1) return ; 
        swap(arr[0],arr[n-1]);
       
        reverse(arr +1 , n-2);
        //arr + 1 shifts the starting memory address forward by one element. Inside the next call, arr[0] refers to what was originally arr[1].
        
    }
};
