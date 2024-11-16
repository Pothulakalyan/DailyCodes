//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        vector<int>v1;
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                cnt+=1;
            }
            else{
                v1.push_back(arr[i]);
            }
        }
        // sort(v1.begin(),v1.end());
        for(int i=0;i<cnt;i++){
            v1.push_back(0);
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=v1[i];
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
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
        int n = arr.size();
        ob.pushZerosToEnd(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends