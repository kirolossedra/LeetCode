class Solution {
public:
    int getValue(vector<int>& mapping, int num) {
        int sum = 0;
        int multip = 1;
        
        if(num==0){
            return mapping[0];
        }
        while (num != 0) {
            sum += multip * mapping[num % 10];
            num /= 10;
            multip *= 10;
        }
        return sum;
    }

    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        std::stable_sort(nums.begin(), nums.end(), [&mapping, this](int a, int b) {
            int valueA = getValue(mapping, a);
            int valueB = getValue(mapping, b);
            return valueA < valueB;
        });

        return nums;
    }
};
