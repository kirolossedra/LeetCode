class Solution {
public:
    string convertToBase7(int num) {
        string y="";
        if(!num)
            return "0";
        int t=abs(num);
        while(t!=0){
            y+= to_string((t%7));
            t/=7;


}
        y=(num>0)?y:(y+"-");
        reverse(y.begin(),y.end());
        
        return y;
        
    }
};