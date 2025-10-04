class Solution {
public:
    void backtrack(vector<string>& res, string path, string& num, long target, int pos, long eval, long multipled) {
        if (pos == num.size()) {
            if (eval == target) {
                res.push_back(path);
            }
            return;
        }
        
        for (int i = pos; i < num.size(); i++) {
            if (i != pos && num[pos] == '0') break;  // skip numbers with leading zero
            string curStr = num.substr(pos, i - pos + 1);
            long cur = stol(curStr);

            if (pos == 0) {
                backtrack(res, curStr, num, target, i + 1, cur, cur);
            } else {
                backtrack(res, path + "+" + curStr, num, target, i + 1, eval + cur, cur);
                backtrack(res, path + "-" + curStr, num, target, i + 1, eval - cur, -cur);
                backtrack(res, path + "*" + curStr, num, target, i + 1, eval - multipled + multipled * cur, multipled * cur);
            }
        }
    }

    vector<string> findExpr(string &s, int target) {
        vector<string> res;
        backtrack(res, "", s, target, 0, 0, 0);
        sort(res.begin(), res.end()); // ensure lexicographical order
        return res;
    }
};
