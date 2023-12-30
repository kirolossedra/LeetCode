class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        int t = s.size()-part.size();
        int flag=0;
       for(int i=0; i<= t;){
           
           if(s.substr(i,part.size())== part){
               s.erase(i,part.size());
               i=0;
               flag = 1;
               cout<<s[i]<<endl;
              
           }
            t = s.size()-part.size();
             if(flag==1){
               i=0;
               flag =0;
           }
           else{
               i++;
           }
       }
      
          
        return s;
    }


};