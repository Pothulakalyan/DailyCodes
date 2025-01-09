//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int iterating_index=0;
        long long int curr_sum=0;
        vector<int>ve;
        for(int i=0;i<arr.size();i++){
            curr_sum+=arr[i];
            while(curr_sum>target && iterating_index<i){
                curr_sum-=arr[iterating_index];
                iterating_index+=1;
            }
            if(curr_sum==target){
                ve.push_back(iterating_index+1);
                ve.push_back(i+1);
                return ve;
            }
        }
        ve.push_back(-1);
        return ve;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends