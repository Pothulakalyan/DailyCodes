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
    int lengthOfLoop(Node *head) {
        // code here
        map<Node*,int>mpp;
        int i=1;
        Node* temp=head;
        while(temp!=nullptr){
            if(mpp.find(temp)==mpp.end()){
                mpp.insert({temp,i});
                i+=1;
                temp=temp->next;
            }
            else{
                return i-mpp[temp];
            }
            
        }
        return 0;
        
        
        
    }
};