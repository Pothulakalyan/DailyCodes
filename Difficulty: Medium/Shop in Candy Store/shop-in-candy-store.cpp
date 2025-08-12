class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        vector<int>ve;
        sort(prices.begin(),prices.end());
        
        int n,i,j;
        n=prices.size();
        i=0;
        j=n-1;
        long int min_cost=0;
        while(i<=j){
            min_cost+=prices[i];
            j-=k;
            i+=1;
        }
        ve.push_back(min_cost);
        i=0,j=n-1;
        long int max_cost=0;
        
        while(i<=j){
            max_cost+=prices[j];
            i+=k;
            j-=1;
        }
        ve.push_back(max_cost);
        return ve;
        
    }
};