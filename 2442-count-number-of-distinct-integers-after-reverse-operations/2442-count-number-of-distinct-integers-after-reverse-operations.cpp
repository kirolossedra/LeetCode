class Solution {
public:
    
    
    int Intreverse(int a){

        string str = to_string(a);
    reverse(str.begin(),str.end());
        
        return stoi(str);

}
    int countDistinctIntegers(vector<int>& nums) {
        int size= nums.size();
        
        for(int i=0; i<size; i++)
            nums.push_back(Intreverse(nums[i]));
        
        
        unordered_map <int,int> mp;
        
        for(auto itr : nums)
            mp[itr]++;
        
        int count=0;
        for(auto itr : mp)
            count++;
        
        
        return count;
            
        
    }
};