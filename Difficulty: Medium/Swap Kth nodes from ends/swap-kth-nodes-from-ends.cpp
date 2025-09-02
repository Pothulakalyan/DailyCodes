/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        // code here
        if(!head) return head;
        int n=0;
        Node* temp=head;
        while(temp){
            n+=1;
            temp=temp->next;
        }
        
        if(k>n) return head;
        
        Node* first=head;
        for(int i=1;i<k;i++){
            first=first->next;
        }
        
        Node* second=head;
        for(int i=1;i<(n-k+1);i++){
            second=second->next;
        }
        
        if(first!=second){
            swap(first->data,second->data);
        }
        
        return head;
    }
};