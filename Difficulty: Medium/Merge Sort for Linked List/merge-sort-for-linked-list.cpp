/*
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* CreatingLL(vector<int>ve){
        Node* ans= new Node(ve[0]);
        Node* temp=ans;
        for(int i=1;i<ve.size();i++){
            Node * nn=new Node(ve[i]);
            temp->next=nn;
            temp=temp->next;
        }
        return ans;
    }
    
    Node* mergeSort(Node* head) {
        // code here
        vector<int>ve;
        Node* temp=head;
        while(temp!=nullptr){
            ve.push_back(temp->data);
            temp=temp->next;
        }
        sort(ve.begin(),ve.end());
        Node* h=CreatingLL(ve);
        
        return h;
        
    }
};