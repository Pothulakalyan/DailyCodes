//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        map<int,int>mpp;
        vector<int>ve;
        for(int i=0;i<k;i++){
            mpp[A[i]]++;
        }
        ve.push_back(mpp.size());
        for(int i=k;i<n;i++){
            if(mpp[A[i-k]]==1){
                mpp.erase(A[i-k]);
            }
            else{
                mpp[A[i-k]]--;
            }
            mpp[A[i]]++;
            ve.push_back(mpp.size());
        }
        return ve;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends