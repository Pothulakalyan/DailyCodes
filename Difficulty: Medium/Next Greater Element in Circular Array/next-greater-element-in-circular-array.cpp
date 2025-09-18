class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        int n = arr.size();
        vector<int> result(n, -1);   // initialize all as -1
        stack<int> st;               // stack to store indices

    // traverse the array twice (to simulate circular behavior)
        for (int i = 0; i < 2 * n; i++) {
            int curr = arr[i % n];
        // check if current element is the next greater for stack top
            while (!st.empty() && arr[st.top()] < curr) {
                result[st.top()] = curr;
                st.pop();
            }
            if (i < n) st.push(i);   // push only first n indices
         }
        return result;
    }
};