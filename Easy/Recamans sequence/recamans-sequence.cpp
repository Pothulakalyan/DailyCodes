//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        vector<int>ve;
        map<int,int>mpp;
        ve.push_back(0);
        for(int i=1;i<=n;i++)
        {
            int k=ve[i-1]-i;
            if(k>0 and mpp[k]==0){
                
                ve.push_back(k);
                mpp[k]++;
            }
            else
            {
                int l = ve[i-1]+i;
                ve.push_back(l);
                mpp[l]++;
            }
        }
        return ve;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends