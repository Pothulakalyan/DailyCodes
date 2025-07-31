class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        // int n=arr.size(),cnt=0;
        // for(int i=0;i<=n-1;i++){
        //     int sum=0;
        //     for(int j=i;j<=n-1;j++){
        //         sum+=arr[j];
        //         if(sum==k){
        //             cnt+=1;
        //         }
        //     }
        // }
        // return cnt;
        map<int,int>mpp; //map<prefix_sum,frequency>
        int cnt=0;
        mpp[0]=1;
        int prefix_sum=0,n=arr.size();
        for(int i=0;i<=n-1;i++){
            prefix_sum+=arr[i];
            
            if(mpp.find(prefix_sum-k)!=mpp.end()){
                cnt+=mpp[prefix_sum-k];
            }
            mpp[prefix_sum]++;
        }
        return cnt;
    }
};