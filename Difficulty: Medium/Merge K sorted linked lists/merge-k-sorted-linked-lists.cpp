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

struct cmp{
    bool operator()(Node* a, Node* b){
        return a->data> b->data;
    }
};
class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        
        priority_queue<Node*, vector<Node*> ,cmp>pq;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=nullptr){
                pq.push(arr[i]);
            }
        }
        
        Node* res=new Node(-1);
        Node* temp=res;
        
        while(!pq.empty()){
            Node* top=pq.top();
            pq.pop();
            temp->next=top;
            temp=temp->next;
            
            if(top->next){
                pq.push(top->next);
            }
            
        }
        return res->next;
    
        
        
    }
};