//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
       
           if (n == 1) return 1;
        if (n == 2) return 1;
        
        int a = 1, b = 1, c;
        for (int i = 3; i <= n; i++) {
            c = (a + b) % 1000000007; // To prevent overflow as per GFG constraints
            a = b;
            b = c;
        }
        return c;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends