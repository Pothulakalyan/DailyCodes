//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
         Node* temp=head;
        int cnt=1;
    //count the all the nodes
        while(temp->next){
            cnt++;
            temp=temp->next;
        }
        if(cnt==k || k==0){
            return head;
        }
    //temp pointing to last node
    //1)make the last node point to the head
        temp->next=head;
    // reuse the temp pointer
        k=k%cnt;
        temp=head;
    //2) find (n-k)th node
        for(int i=1;i<k;i++){
            temp=temp->next;
        }   
        head=temp->next; //new head
    //3) (n-k)th node point to null
        temp->next=NULL;
        return head;
    }
};
    


//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends