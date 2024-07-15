//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
        if(d*9 < s) return "-1";
        string res;
        s=s-1;
        for(int i=0;i<d;i++){
            if(i==d-1){
                res=to_string(s+1)+res;
            }
            else{
                if(s>9){
                    res=to_string(9)+res;
                    s-=9;
                }
                else{
                    res=to_string(s)+res;
                    s=0;
                }
            }
        }
        return res;
        
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends