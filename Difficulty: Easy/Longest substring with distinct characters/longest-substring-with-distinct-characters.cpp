//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool is_distinct(string dummy){
        map<char,int>mpp;
        for(int i=0;i<dummy.size();i++){
            mpp[dummy[i]]++;
        }
        if(mpp.size()==dummy.size()){
            return true;
        }
        else{
            return false;
        }
    }
    int longestUniqueSubstr(string &s) {
        // code here
        int i=0,j=0,ans=0;
        string dummy;
        while(j<s.size()){
            dummy+=s[j];
            while(dummy.size()>1){
                if(is_distinct(dummy)){
                    break;
                }
                else{
                    dummy.erase(0,1);
                    i+=1;
                }
            }
            ans=max(ans,j-i+1);
            j+=1;
        }
        return ans;
    }
    
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends