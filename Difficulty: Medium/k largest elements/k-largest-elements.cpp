class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
       priority_queue<int,vector<int>,greater<int>>minHeap;
       for(int i=0;i<arr.size();i++){
           if(minHeap.size()<k){
               minHeap.push(arr[i]);
           }
           else if(arr[i]>minHeap.top()){
               minHeap.push(arr[i]);
               minHeap.pop();
           }
       }
       vector<int>ans;
       while(!minHeap.empty()){
           ans.push_back(minHeap.top());
           minHeap.pop();
       }
       sort(ans.begin(),ans.end(),greater<int>());
       return ans;
    }
};