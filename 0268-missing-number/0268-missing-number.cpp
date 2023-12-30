class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int tot = (nums.size()*(nums.size()+1))/2;
        
        int sum=0;
        for(auto itr : nums)
            sum+=itr;
        
        return tot-sum;
        
    }
};