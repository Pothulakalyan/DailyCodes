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
class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int Sum(struct Node*head, int n){
        struct Node * temp=head;
        stack<int>st;
        while(temp!=NULL){
            st.push(temp->data);
            temp=temp->next;
            
        }
        int cnt=n,sum=0;
        while(!st.empty()){
            if(cnt!=0){
                sum+=st.top();
                st.pop();
                cnt-=1;
                
            }
            if(cnt==0){
                break;
            }
        }
        if(head==NULL) return 0;
        if(cnt==0) return sum;
       
        
        
        
    }
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        int k=Sum(head,n);
        return k;
        
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
        int n;
        cin >> n;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.sumOfLastN_Nodes(head, n) << endl;
    }
    return 0;
}
// } Driver Code Ends