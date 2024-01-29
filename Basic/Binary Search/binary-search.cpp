//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isBinarySe(int arr[],int l , int h , int tr)
    {
        if(l>h) return -1;
        int mid=(l+h)/2;
        if(tr==arr[mid]) return mid;
        if(tr<arr[mid])
        {
            return isBinarySe(arr,l,mid-1,tr);
        }
        else
        {
            return isBinarySe(arr,mid+1,h,tr);
        }
    }
    
    int binarysearch(int arr[], int n, int k) {
        // code here
        int l=0,tr=k;
        int h=n-1;
        int k1=isBinarySe(arr,l,h,tr);
        return k1;
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends