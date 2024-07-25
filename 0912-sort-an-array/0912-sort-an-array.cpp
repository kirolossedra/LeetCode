class Solution {
public:
    
    
    // sort using heapsort space O(1) and guarantees O(NlgN) time 
    



    
    
    vector<int> sortArray(vector<int>& nums) {
        
          // Step 1: Turn the vector into a heap
    std::make_heap(nums.begin(), nums.end());

    // Step 2: Sort the heap
    std::sort_heap(nums.begin(), nums.end());
        
        
        
        return nums;
        
    }
};