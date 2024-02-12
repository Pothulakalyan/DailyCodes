//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long   mod=1e9 + 7;
    long long recursive_sequence(int n,int i)
    {
        if(i==0){
            return 1;
        }
        return( (n % mod) * (recursive_sequence(n-1,i-1) %mod)) % mod;
    }
    long long sequence(int n){
        // code here
        int su=0,s;
        for(int i=1;i<=n;i++)
        {
            int k=(i*(i+1)/2);
            s=recursive_sequence(k,i);
            su=(su%mod + s%mod)%mod;
        }
        return su%mod;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends