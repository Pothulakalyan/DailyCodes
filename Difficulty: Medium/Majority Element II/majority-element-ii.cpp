class Solution {
  public:
    void selection_sorting(vector<int>&ans){
        for(int i=0;i<ans.size();i++){
            int min=ans[i];
            int min_ind=i;
            for(int j=i+1;j<ans.size();j++){
                if(min>ans[j]){
                    min=ans[j];
                    min_ind=j;
                }
            }
            swap(ans[i],ans[min_ind]);
        }
    }
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        vector<int>ans;
        int one_third=arr.size()/3;
        map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        for(auto it:mpp){
            if(it.second>one_third){
                ans.push_back(it.first);
            }
        }
        selection_sorting(ans);
        return ans;
    }
};