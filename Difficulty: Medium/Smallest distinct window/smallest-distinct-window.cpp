//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& str) {
        // code here
        unordered_set<char> uniqueChars(str.begin(), str.end());
        int required = uniqueChars.size();

        unordered_map<char, int> windowFreq;
        int left = 0, right = 0, formed = 0;
        int minLen = INT_MAX;

        while (right < str.size()) {
            char ch = str[right];
            windowFreq[ch]++;
            if (windowFreq[ch] == 1) {
                formed++;
            }

            while (formed == required) {
                minLen = min(minLen, right - left + 1);

                char lch = str[left];
                windowFreq[lch]--;
                if (windowFreq[lch] == 0) {
                    formed--;
                }
                left++;
            }

            right++;
        }

        return minLen;

        
    }
};


//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends