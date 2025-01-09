//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int st=0;
        int cur_sum=0;
        vector<int>ve;
        for(int i=0;i<arr.size();i++){
            cur_sum+=arr[i];
            while(cur_sum>target && st<i){
                cur_sum-=arr[st];
                st++;
            }
            if(cur_sum==target){
                ve.push_back(st+=1);
                ve.push_back(i+=1);
                break;
                
            }
        }
        if(ve.size()==0){
            ve.push_back(-1);
            return ve;
        }

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