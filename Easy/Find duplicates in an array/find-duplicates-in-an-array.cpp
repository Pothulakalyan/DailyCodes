//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
         int c=0;
        vector<int>ve;
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
        {
            int j=i+1;
            if(arr[i]==arr[j] && (c==0 or ve[ve.size()-1]!=arr[i]))
            {
                ve.push_back(arr[i]);
                c++;
            }
        }
        if(c==0)
        {
           return{-1};
        }
        else
        {
            return ve;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends