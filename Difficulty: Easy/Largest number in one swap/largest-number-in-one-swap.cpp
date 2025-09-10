class Solution {
  public:
    string largestSwap(string &s) {
        // code here
        int n = s.size();
        vector<int> last(10, -1);

        // store last occurrence of each digit
        for (int i = 0; i < n; i++) {
            last[s[i] - '0'] = i;
        }

        // try to swap  
        for (int i = 0; i < n; i++) {
            int digit = s[i] - '0'; 
            // look for bigger digit from right side
            for (int d = 9; d > digit; d--) {
                if (last[d] > i) {
                    swap(s[i], s[last[d]]);
                    return s;
                }
            }
        }
        return s;
    }
};