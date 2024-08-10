class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        
        
        for(auto c : s){
            
            if(c == '(' or c == '{' or c == '['){
                st.push(c);
            } else{
                if(st.empty())
                    return false;
                
                if(fit(st.top(),c)){
                    st.pop();
                } else{
                    return false;
                }
            }
            
            
        }
        if(!st.empty())
            return false;
        return true;
        
    }
    
    bool fit(char left  , char right ){
        
        if(left == '{' and right == '}')
            return true;
         if(left == '(' and right == ')')
            return true;
         if(left == '[' and right == ']')
            return true;
        
        return false;
        
    }
};