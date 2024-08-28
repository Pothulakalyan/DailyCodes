//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    public:
    
    vector<int> sortByFreq(vector<int>& arr) {
        map<int, int> mpp;
        for (int i = 0; i < arr.size(); i++) {
            mpp[arr[i]]++;
        }

        vector<pair<int, int>> vp;
        for (auto it : mpp) {
            vp.push_back({it.second, it.first});
        }

        sort(vp.begin(), vp.end(), [](pair<int, int>& a, pair<int, int>& b) {
            if (a.first == b.first) {
                return a.second < b.second;  
            }
            return a.first > b.first; 
        });

        vector<int> ve;
        for (auto it : vp) {
            for (int i = 0; i < it.first; i++) {
                ve.push_back(it.second);
            }
        }
        return ve;
}


};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends