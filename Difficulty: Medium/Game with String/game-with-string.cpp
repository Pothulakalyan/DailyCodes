class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        priority_queue<int>pq;
        for(auto it:mpp){
            pq.push(it.second);
        }
        while(k-- && !pq.empty()){
            int top=pq.top();
            pq.pop();
            top--;
            if(top>0) pq.push(top);
        }
        int sum=0;
        while(!pq.empty()){
            int top=pq.top();
            pq.pop();
            sum+=top*top;
            
        }
        return sum;
        
    }
};