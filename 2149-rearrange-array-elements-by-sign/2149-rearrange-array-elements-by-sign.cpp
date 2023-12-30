class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> pos;
        vector<int> neg;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        int posCount = 0;
        int negCount = 0;
        for(int i=0; i<nums.size(); i++){
            if(i%2){
                nums[i] = neg[negCount];
                negCount++;
                
            }
                
            else {
            
                nums[i] = pos[posCount];
                posCount++;
            }
        }
        
        return nums;
        
        
        
    }
};