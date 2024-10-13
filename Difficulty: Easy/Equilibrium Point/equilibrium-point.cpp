//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &a) {
        // Your code here
        //int l=0,r=0,res=0;
        // for(int i=0;i<arr.size();i++){
        //     r+=arr[i];
        // }
        // for(int i=0;i<arr.size();i++){
        //     r-=arr[i];
        //     if(l==r){
        //         res=i;
        //     }
        //     else{
        //         l+=arr[i];    
        //     }
            
        // }
        // if(res){
        //     return res+1;
        // }
        // return {-1};
        int n=a.size();
        int left_sum=0,right_sum=0;
        for(int i=0;i<n;i++)
        {
            right_sum+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            right_sum-=a[i];
            if(left_sum==right_sum)
            {
                return i+1;
                break;
            }
            else
            {
                left_sum+=a[i];
            }
        }
        return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<long long> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.equilibriumPoint(arr) << endl;
    }
}
// } Driver Code Ends