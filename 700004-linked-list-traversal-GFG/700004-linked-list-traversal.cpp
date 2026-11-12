/* Structure for Link list node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> printList(Node *head) {
        // code here
        vector<int>result ; 
        Node* curr = head ; 
        
        while(curr!=nullptr){
            result.push_back(curr->data);
            curr = curr->next ; 
        }
         return result ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna