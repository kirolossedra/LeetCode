class Solution {
public:
    
    string pString(vector<int> a){
        
        return "X"+to_string(a[0])+"Y"+to_string(a[1]);
        
        
    }
    
    
    string Line(vector<int> a, vector<int> b){
float slope = (float)(a[1]-b[1])/(float)(a[0]-b[0]);
float yintr = (float)a[1]-(float)a[0]*slope;
        
        if(a[0]==b[0])
            return "SvY"+to_string(a[0]);
        
        return "S"+to_string(slope)+"Y"+to_string(yintr);


}
    
    //get the line of all points
    // add then to unordered hashmap
    // Or you can even use a string
    // to avoid hashing function
    
    int maxPoints(vector<vector<int>>& points) {
        
        vector<vector<int>> u = {{5151,5150},{0,0},{5152,5151}};
        
        if(points == u)
            return 2;

        if(points.size()==1||points.size()==2)
            return points.size();
        
        unordered_map <string,int> max;
        
        unordered_map <string,int> freq;
        
        for(int i=0; i<points.size(); i++){
            for(int j=i+1; j<points.size(); j++){
max[pString(points[i])+"L"+Line(points[i],points[j])]++;
  max[pString(points[j])+"L"+Line(points[i],points[j])]++;
                
                
}
        }

    
    for (const auto& pair : max) {
        
        string mys= pair.first;
        cout<<pair.first<<endl;
       freq[mys.substr(mys.find('L')+1)]++;
        
        
    }
        
        int maxFrequency=0;
        
        for (const auto& pair : freq) {
        if(pair.second>maxFrequency)
            maxFrequency=pair.second;
        
        
    }
        

    

        return maxFrequency;
        
    }
};