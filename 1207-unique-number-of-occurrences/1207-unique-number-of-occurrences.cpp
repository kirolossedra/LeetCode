class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {


        unordered_map <int,int> numFreq;

        for(auto num : arr){
            numFreq[num]++;
        }

        unordered_map <int,int> freqDoubled;

        for(auto num : numFreq){
            freqDoubled[num.second]++;
        }

        for(auto num : freqDoubled){
            if(num.second>1){
                return false;
            }
        }

        return true;
        
    }
};