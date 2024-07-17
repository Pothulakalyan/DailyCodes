//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
        // Your code here
        vector<int> ve;
        int start = 0;
        long long current_sum = 0;

        for (int end = 0; end < n; end++) {
            current_sum += arr[end];

            while (current_sum > s && start < end) {
                current_sum -= arr[start];
                start++;
            }

            if (current_sum == s) {
                ve.push_back(start + 1); // 1-based index
                ve.push_back(end + 1); // 1-based index
                return ve;
            }
        }

        ve.push_back(-1);
        return ve;;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends