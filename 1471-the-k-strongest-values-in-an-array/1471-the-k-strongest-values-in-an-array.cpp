class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        
        sort(arr.begin(),arr.end());
        
        int referenceNumber = arr[(arr.size()-1)/2];
        
          std::priority_queue<int, std::vector<int>, 
        std::function<bool(int, int)>> pq(
            [referenceNumber](int a, int b) {
                // Prioritize elements closer to the reference number
                return (abs(a - referenceNumber) == abs(b - referenceNumber))?(a<b):abs(a - referenceNumber) < abs(b - referenceNumber);
            }
        );
        
        for(int i=0; i<arr.size(); i++){
            pq.push(arr[i]);
        }
        
        vector<int> mys;
        
        while(k!=0){
            mys.push_back(pq.top());
            pq.pop();
            k--;
        }
        return mys;

        
        
    }
};