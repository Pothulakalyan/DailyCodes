//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
       if(arr.size()>1){
            int i=0,j=arr.size()-1;
            while(i<=(arr.size()/2)-1){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i+=1;
                j-=1;
            }
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
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends