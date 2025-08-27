class Solution {
  public:
    void bubbleSort(vector<int>&ve){
        int n=ve.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(ve[j]>ve[j+1]){
                    int temp=ve[j];
                    ve[j]=ve[j+1];
                    ve[j+1]=temp;
                }
            }
        }
        
        
    }
    int countTriangles(vector<int>& arr) {
        // code here
        bubbleSort(arr);
        int count=0;
        for(int k=arr.size()-1;k>=2;k--){
            int i=0,j=k-1;
            while(i<j){
                if(arr[i]+arr[j]>arr[k]){
                    count+=(j-i);
                    j-=1;
                }
                else{
                    i+=1;
                }
            }
        }
        return count;
        
    }
};
