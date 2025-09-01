class Solution {
  public:
    int sumOfModes(vector<int>& arr, int k) {
        int n = arr.size();
        long long sum = 0;
        map<int,int> mpp;                // number -> frequency
        map<int,set<int>> freqMap;       // frequency -> set of numbers
        int maxFreq = 0;

        // insert first k elements
        for(int i=0; i<k; i++){
            int el = arr[i];
            int oldFreq = mpp[el];
            if(oldFreq > 0) freqMap[oldFreq].erase(el);
            mpp[el]++;
            freqMap[mpp[el]].insert(el);
            maxFreq = max(maxFreq, mpp[el]);
        }
        sum += *freqMap[maxFreq].begin(); // mode = smallest element at maxFreq

        // slide window
        for(int i=k; i<n; i++){
            int removeEl = arr[i-k];
            int addEl = arr[i];

            // remove old
            int oldFreq = mpp[removeEl];
            freqMap[oldFreq].erase(removeEl);
            if(freqMap[oldFreq].empty()) freqMap.erase(oldFreq);
            mpp[removeEl]--;
            if(mpp[removeEl] > 0) freqMap[mpp[removeEl]].insert(removeEl);
            else mpp.erase(removeEl);

            if(freqMap.find(maxFreq) == freqMap.end()) maxFreq--; // adjust maxFreq

            // add new
            int oldAddFreq = mpp[addEl];
            if(oldAddFreq > 0) freqMap[oldAddFreq].erase(addEl);
            mpp[addEl]++;
            freqMap[mpp[addEl]].insert(addEl);
            maxFreq = max(maxFreq, mpp[addEl]);

            // add current mode
            sum += *freqMap[maxFreq].begin();
        }

        return sum;
    }
};
