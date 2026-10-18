class Solution {
public:
void insertatbottom(stack<int> &st , int element){
    //base case 
    if(st.empty()){
        st.push(element);
        return ; 
    }

int top = st.top();
st.pop();
insertatbottom(st , element);

st.push(top);


}
void reversehelp(stack<int> &st ){
//base case 
if(st.size() ==0){
    //st.push(n);
    return ; 
}


//recursive case 
int top = st.top(); 
st.pop(); 
reversehelp(st);

insertatbottom(st , top );



}

    void reverseStack(stack<int> &st) {
        //int st.top() = n ;
        reversehelp(st);

    }
};