//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        map<char,int>mpp;
        mpp.insert({'I' ,1});
        mpp.insert({'V' ,5});
        mpp.insert({'X' ,10});
        mpp.insert({'L' ,50});
        mpp.insert({'C' ,100});
        mpp.insert({'D' ,500});
        mpp.insert({'M',1000});
        long long ans=0;
        for(int i=0;i<str.size();i++){
            //if(str[i]=='X' and str[i+1]=='I' and str[i+2]=='X') return 21;
            if(mpp[str[i]]<mpp[str[i+1]]){
                ans-=mpp[str[i]];
            }
            else{
                ans+=mpp[str[i]];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends