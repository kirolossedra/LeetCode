class Solution {
public:
    int countHousePlacements(int n) {
        
        if(n==1)
            return 4;
        if(n==2)
            return 9;
        
        long long lp = 2;
        long long rp = 3;
        bool flag  =1;
        long long sum=0;
        for(int i= 3; i<=n; i++){
            if(flag)
                lp= rp+lp;
            
            else 
                rp=rp+lp;
            
            cout<<lp;
            cout<<rp<<endl;
            
            
            lp%=(1000000007);
            rp%=(1000000007);
            
            
            sum=(flag)? ((long long)lp*(long long)lp)%(1000000007):((long long)rp*(long long)rp)%(1000000007);
            
            


flag= !flag;
}
        
        return sum;
        
    }
};