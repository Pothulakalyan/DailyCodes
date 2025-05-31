class Solution {
  public:
    int kthSmallest(vector<vector<int>> &ve, int k) {
        // code here
        vector<int>ans;
        for(int i=0;i<ve.size();i++){
            for(int j=0;j<ve[i].size();j++){
                int val=ve[i][j];
                ans.push_back(val);
            }
        }
        sort(ans.begin(),ans.end());
        int n=k-1;
        for(int i=0;i<ans.size();i++){
            if(i==n){
                return ans[i];
            }
        }
    }
};