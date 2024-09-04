//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    
		int nthStair(int n){
		  //   int a=0,b=1;
    //         for(int i=0;i<n;i++){
    //             int c=a+b;
    //             a=b;
    //             b=c;
    //         }
    //         return b;
        return n/2+1;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends