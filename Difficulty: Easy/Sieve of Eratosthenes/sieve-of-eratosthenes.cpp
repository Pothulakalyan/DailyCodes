//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code her
	    vector<int>ve;
	    for(int i=0;i<=N;i++){
	        ve.push_back(1);
	    }
	    ve[0]=0;
	    ve[1]=0;
	    for(int i=2;i<=N;i++){
	        for(int j=i*i;j<=N;j+=i){
	            ve[j]=0;
	        }
	    }
	    vector<int>v1;
	    for(int i=2;i<=N;i++){
	        if(ve[i]!=0){
	            v1.push_back(i);
	        }
	    }
	    return v1;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends