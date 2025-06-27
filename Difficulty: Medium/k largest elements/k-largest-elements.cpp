class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for(int i = 0; i < arr.size(); i++) {
            if (minHeap.size() < k) {
                minHeap.push(arr[i]);
            } else if (arr[i] > minHeap.top()) {
                minHeap.pop();
                minHeap.push(arr[i]);
            }
        }

        // Extract elements into result vector
        vector<int> result;
        while(!minHeap.empty()) {
            result.push_back(minHeap.top());
            minHeap.pop();
        }

        // Sort in descending order
        sort(result.begin(), result.end(), greater<int>());

        return result;
    }
};