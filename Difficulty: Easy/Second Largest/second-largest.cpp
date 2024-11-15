//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        sort(arr.begin(),arr.end());
        map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;   
        }
        if(mpp.size()==arr.size()){
            return arr[arr.size()-2];
        }
        else{
            int f=INT_MAX;
            int ans=0;
            for(int i=arr.size()-1;i>=1;i--){
                if(arr[i]!=arr[i-1]){
                    ans=arr[i-1];
                    break;
                }
                else{
                    f=i-1;
                }
            }
            if(f){
                return ans;
            }
            else{
                return -1;
            }
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
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends