//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long mod=1e9+7;
    
    vector<int> Series(int n) {
        // Code here
        vector<int>ve;
        int a=0,b=1,c;
        ve.push_back(0);
        ve.push_back(1);
        for(int i=2;i<=n;i++){
            c=(a%mod+b%mod)%mod;
            ve.push_back(c);
            a=b;
            b=c;
        }
        return ve;
    
        
        
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends