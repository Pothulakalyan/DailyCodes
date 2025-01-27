//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

// } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        // code here
        int size_of_A=A.size();
        int i=0;
        for(int j=0;j<B.size();j++){
            if(A[i]==B[j]){
                i+=1;
            }
            if(i==size_of_A){
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    
cout << "~" << "\n";
}
    return 0; 
} 

// } Driver Code Ends