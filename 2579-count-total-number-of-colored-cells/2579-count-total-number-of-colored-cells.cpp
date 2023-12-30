class Solution {
public:
    long long increase(int n){
if(n==2)
    return 4;
if(n==3)
    return 8;
        return increase(n-1)+increase(n-2);

}
    long long coloredCells(int n) {
        
      
        
        
        if (n==1)
            return 1;
        return 4*(n-1)+coloredCells(n-1);
        
    }
};