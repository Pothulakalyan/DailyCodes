//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    public:
    Node* reverse(Node*head){
        Node*prev=NULL;
        Node*next;
        Node*curr=head;
        while(curr){                                                                                                                     
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return head;
        
    }
    
    Node* addOne(Node* head) {
        Node*temp;
       Node*rev=reverse(head);
       //return rev;
       Node*rrev=rev;
       int carry=0;
       int cnt=1;
       int sum=0;
       while(rrev){
          if(cnt)//1
          {
              sum=rrev->data+1;//10
              rrev->data=sum%10;
              if(sum>9){
                  //0
                  carry=1;//1
              }
              cnt-=1;
          }
          else{
              if(rrev->data+carry>9){
                rrev->data=(rrev->data+carry)%10;//0
                carry=1;//1
              }
              else{
                  rrev->data=(rrev->data+carry)%10;
                  carry=0;//1
              }
          }
          temp=rrev;
          rrev=rrev->next;
        }
        if(carry){
            Node* nn=new Node(carry);
            temp->next=nn;
        }
        Node* res=reverse(rev);
        return res;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends