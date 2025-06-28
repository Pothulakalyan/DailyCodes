class Solution {
  public:
    
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        sort(b.begin(),b.end());
        vector<int>ve;
        for(int i=0;i<a.size();i++){
            int ele=a[i];
            int element_cnt=upper_bound(b.begin(),b.end(),ele)-b.begin();
            ve.push_back(element_cnt);
            
        }
        return ve;
    }
};