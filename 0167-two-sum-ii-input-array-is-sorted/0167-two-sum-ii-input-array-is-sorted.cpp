class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> result;
        int lp=0;
        int rp=numbers.size()-1;
        
        while(lp<rp){
if(numbers[lp]+numbers[rp]>target)
    rp--;
else if(numbers[lp]+numbers[rp]<target)
    lp++;
            else 
                break;

}
result.push_back(lp+1);
        result.push_back(rp+1);
        
        return result;
        
    }
};