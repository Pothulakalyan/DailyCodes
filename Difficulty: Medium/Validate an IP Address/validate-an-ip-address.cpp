//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            int val = 0;
            string temp = "";
            for(int i = 0 ; i < s.size() ; i++){
                if(s[i] != '.' and (s[i] < '0' or s[i] > '9')) return 0;
                if(s[i] == '.'){
                    val++;
                    if(temp.size() == 0 or temp.size() > 3) return 0;
                    if((temp.size() == 3 and temp[0] >= '3') or(stoi(temp) > 255)) return 0;
                    if((temp.size() == 2 and temp[0] == '0' and temp[1] != '0') or (temp.size() == 3 and temp[0] == '0' and temp[1] != '0' and temp[2] != '0')) return 0;
                    if(temp.size() > 1 and temp[0] == '0') return 0;
                    temp = "";
                }
                else{
                    temp += s[i];
                }
            }
            if(temp.size() == 0 or temp.size() > 3) return 0;
            if((temp.size() == 3 and temp[0] >= '3') or(stoi(temp) > 255)) return 0;
            if((temp.size() == 2 and temp[0] == '0' and temp[1] != '0') or (temp.size() == 3 and temp[0] == '0' and temp[1] != '0' and temp[2] != '0')) return 0;
            if(temp.size() > 1 and temp[0] == '0') return 0;
            if(temp.size() > 3 or val != 3) return 0;
            return 1;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends