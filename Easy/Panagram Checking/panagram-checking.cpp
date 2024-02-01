//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        int f=0;
        vector<int>ve(26,0);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.size();i++)
        {
            int a=s[i]-'a';
            if(a>=0 and a<26)
            {
                ve[a]=1;
            }
        }
        for(int i=0;i<ve.size();i++)
        {
                if(ve[i]==0) 
                {
                    f=1;
                }
        }
        if(f==1) return 0;
        else{
            return 1;
        }
        
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends