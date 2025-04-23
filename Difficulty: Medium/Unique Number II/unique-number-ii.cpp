//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> singleNum(vector<int>& ve) {
        // Code here.
        unordered_map<int, int> freq;
        for(int num : ve) {
            freq[num]++;
        }

        vector<int> uniqueNums;
        for(auto it : freq) {
            if(it.second == 1) {
                uniqueNums.push_back(it.first);
            }
        }

    // Optional: Sort the result
        sort(uniqueNums.begin(), uniqueNums.end());
        return uniqueNums;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.singleNum(arr);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends