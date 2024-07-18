//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    //vector<vector<long long>>ve;
    int alternatingMaxLength(vector<int>& arr) {
        // Code here
        int cnt=1,w=0,k=0;
        for(int i=0;i<arr.size()-1;i++){
            if((arr[i]<arr[i+1]) and (w==0 or k==1)){
                cnt+=1;
                w=1;
                k=0;
                
            }
            else if((arr[i]>arr[i+1]) && (w==1 or k==0)){
                cnt+=1;
                w=0;
                k=1;
            }
        }
        return cnt;
        
    }
 
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }
        Solution obj;
        int ans = obj.alternatingMaxLength(arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends