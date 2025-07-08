#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> freq;
        vector<int> result(n, -1);
        stack<int> st; // will store values (not indices)

        // Step 1: Count frequencies
        for (int num : arr) {
            freq[num]++;
        }

        // Step 2: Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            int current = arr[i];

            // Remove elements with frequency <= current's frequency
            while (!st.empty() && freq[st.top()] <= freq[current]) {
                st.pop();
            }

            // If stack has element, it's our answer
            if (!st.empty()) {
                result[i] = st.top();
            }

            // Push current element
            st.push(current);
        }

        return result;
    }
};
