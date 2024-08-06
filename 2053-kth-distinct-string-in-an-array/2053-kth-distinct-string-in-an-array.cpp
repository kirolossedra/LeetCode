class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map <string,int> m ; 
        
        
        for(auto n : arr){
            m[n]++;
        }
        
        
        for(int i=0; i<arr.size(); i++){
              if(k==1){
                 if(m[arr[i]]==1){
                   return arr[i];
               } 
            }
            
            if(k>1){
               if(m[arr[i]]==1){
                   k--;
               } 
                cout<<arr[i];
            }
          
          
        }
          return "";
    }
};