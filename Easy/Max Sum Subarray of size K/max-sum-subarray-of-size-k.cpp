//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long long  Max_sum(int k,vector<int>&ve,int n){
        long long cur_sum=0,max_sum=0;
        for(int i=0;i<k;i++){
            cur_sum+=ve[i];
        }
        max_sum=cur_sum;
        for(int i=k;i<n;i++){
            cur_sum=(cur_sum-ve[i-k])+ve[i];
            if(cur_sum>max_sum){
                max_sum=cur_sum;
            }
        }
        return max_sum;
    }
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here
        
        long long k=Max_sum(K,Arr,N);
        return k;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends