//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        // code here...
        int cur_sum=0,max_sum=0,cnt=0;
        for(int i=0;i<arr.size();i++){
            cur_sum+=arr[i];
            max_sum=max(cur_sum,max_sum);
            if(cur_sum<0){
                cnt+=1;
                cur_sum=0;
            }
        }
        if(cnt==arr.size()){
            sort(arr.begin(),arr.end());
            return arr[arr.size()-1];
        }
        return max_sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.maxSubarraySum(arr) << endl;
    }
}
// } Driver Code Ends