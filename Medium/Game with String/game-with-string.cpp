//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        map<char,int>mpp;
        vector<int>ve;

        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        for(auto it:mpp)
        {
            int k=it.second;
            ve.push_back(k);
        }
        int n=ve.size();
        sort(ve.begin(),ve.end());
        while(k>0){
            ve[n-1]=ve[n-1]-1;
            k--;
            sort(ve.begin(),ve.end());
        }
        int sum = 0;
        for(auto it:ve) {
           sum += pow(it,2);
        }
        
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends