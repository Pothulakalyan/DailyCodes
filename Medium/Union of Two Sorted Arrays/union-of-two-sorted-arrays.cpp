//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int>vt;
        map<int,int>mpp;
        vector<int>ans;
        set<int>s;
        for(int i=0;i<n;i++){
            vt.push_back(arr1[i]);
        }
        for(int i=0;i<m;i++){
            vt.push_back(arr2[i]);
        }
        for(auto it:vt){
            s.insert(it);
        }
    //   // sort(vt.begin(),vt.end());
    //     for(int i=0;i<vt.size();i++){
    //         mpp[vt[i]]++;
    //         //ans.push_back(ve[i]);
    //     }
        for(auto it:s){
            ans.push_back(it);
        }
        
        return ans;
        
    }
    
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends