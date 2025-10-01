class Solution {
  public:
     vector<vector<int>> ans;

    void backtrack(vector<int>& arr, vector<int>& temp, vector<bool>& used) {
        if (temp.size() == arr.size()) {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < arr.size(); i++) {
            if (used[i]) continue;
            if (i > 0 && arr[i] == arr[i-1] && !used[i-1]) continue; // skip duplicates

            used[i] = true;
            temp.push_back(arr[i]);
            backtrack(arr, temp, used);
            temp.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());  // sort to handle duplicates
        vector<bool> used(arr.size(), false);
        vector<int> temp;
        ans.clear();
        backtrack(arr, temp, used);
        return ans;
        
    }
};