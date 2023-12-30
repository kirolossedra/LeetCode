class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map <int,int> mp;
        int total =0;
        for(int i=0; i<tasks.size(); i++) 
mp[tasks[i]]++;
        
        
            for (const auto& pair : mp)
                total+=pair.second;
                

        
        int sub =0;
int itr =0;
        cout<<"Total is"<<total;
        while(sub!=total){
            
            
for (const auto& pair : mp) {
    
    if(pair.second>2 and pair.second !=4){
        
mp[pair.first]-=3;
        itr++;
        sub+= 3;

} else if(pair.second ==2 or pair.second == 4){
        cout<<pair.first<<"Repeated "<<pair.second<<endl;
mp[pair.first]-=2;
        itr++;
        sub+=2;

} else if(pair.second == 1) {
return -1;
        
        

}

   
}
cout<<sub<<endl;


}
        
        return itr;
        
        
        
    }
};