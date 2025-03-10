//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int l=0,n;
        n=arr.size();
        int r=n-1;
        int ans=0;
        while(l<r){
            int height=min(arr[l],arr[r]);
            int width=r-l;
            int area=height*width;
            ans=max(ans,area);
            if(arr[l]<arr[r]){
                l+=1;
            }
            else{
                r-=1;
            }
        }
        return ans;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends