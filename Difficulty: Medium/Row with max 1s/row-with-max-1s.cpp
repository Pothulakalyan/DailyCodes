//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        int max=INT_MIN,ind=-1;
        map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            int cnt=0;
            for(int j=0;j<arr[i].size();j++){
                if(arr[i][j]==1){
                    cnt+=1;
                }
                mpp[arr[i][j]]++;
            }
            if(cnt>max){
                max=cnt;
                ind=i;
            }
        }
        if(max==0 and ind!=-1) return -1;
        else if(mpp.size()==1) return 0;
        return ind;
            
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends