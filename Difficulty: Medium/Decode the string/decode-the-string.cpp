class Solution {
  public:
    string decodedString(string &s) {
        // code here
        stack<int> numStack;       // stores repeat counts
        stack<string> strStack;    // stores previous strings
        string curr = "";
        int num = 0;

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0'); // handle multi-digit numbers
            }
            else if (c == '[') {
                numStack.push(num);
                strStack.push(curr);
                num = 0;
                curr = "";
            }
            else if (c == ']') {
                int repeat = numStack.top(); numStack.pop();
                string prev = strStack.top(); strStack.pop();
                string temp = "";
                while (repeat--) temp += curr;
                curr = prev + temp;
            }
            else {
                curr += c; // add normal characters
            }
    }

    return curr;
    }
};