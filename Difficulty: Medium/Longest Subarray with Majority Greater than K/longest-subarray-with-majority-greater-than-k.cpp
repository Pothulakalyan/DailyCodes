class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        int prefix_sum = 0;
        int max_len = 0;
        unordered_map<int, int> first_occurrence;

        for (int i = 0; i < arr.size(); i++) {
            // Convert element to +1 or -1
            if (arr[i] > k) {
                prefix_sum += 1;
            } else {
                prefix_sum -= 1;
            }

            // Case 1: Whole subarray from 0 to i is valid
            if (prefix_sum > 0) {
                max_len = i + 1;
            }

            // Case 2: Check if prefix_sum - 1 occurred before
            else if (first_occurrence.find(prefix_sum - 1) != first_occurrence.end()) {
                int len = i - first_occurrence[prefix_sum - 1];
                max_len = max(max_len, len);
            }

            // Store first occurrence of current prefix_sum
            if (first_occurrence.find(prefix_sum) == first_occurrence.end()) {
                first_occurrence[prefix_sum] = i;
            }
        }

        return max_len;
    }
};