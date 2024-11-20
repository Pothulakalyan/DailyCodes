//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
    //     int n = arr.size();
    //     int ans = -1;

    // // Step 1: Find the first decreasing element from the right
    //     for (int i = n - 2; i >= 0; i--) {
    //         if (arr[i] < arr[i + 1]) {
    //             ans = i;
    //             break;
    //         }
    //     }

    // // Step 2: If no such element is found, reverse the array
    //     if (ans == -1) {
    //         reverse(arr.begin(), arr.end());
    //     } 
    //     else {
    //     // Step 3: Find the smallest element greater than arr[ans] from the right
    //         int ind = -1;
    //         for (int i = n - 1; i > ans; i--) {
    //             if (arr[ans] < arr[i]) {
    //                 ind = i;
    //                 break;
    //             }
    //         }

    //     // Step 4: Swap the elements
    //         swap(arr[ans], arr[ind]);

    //     // Step 5: Reverse the elements to the right of ans
    //         reverse(arr.begin() + ans + 1, arr.end());
    //     }
           int si=arr.size();
           int ans=-1,ind=-1;
           for(int i=si-2;i>=0;i--){
               if(arr[i]<arr[i+1]){
                   ans=i;
                   break;
               }
           }
           if(ans!=-1){
                for(int i=si-1;i>ans;i--){
                    if(arr[i]>arr[ans]){
                        ind=i;
                        break;
                   }
                }
                swap(arr[ans],arr[ind]);
                reverse(arr.begin()+ans+1,arr.end());
           }else{
                reverse(arr.begin(),arr.end());
           
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
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends