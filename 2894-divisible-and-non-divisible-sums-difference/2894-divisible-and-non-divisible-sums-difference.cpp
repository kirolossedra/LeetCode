class Solution {
public:
    int differenceOfSums(int n, int m) {
        
        int dev=0;
        int ndev =0;
        for(int i=1; i<=n; i++){
if(i%m)
    ndev+=i;
            else
                dev+=i;

}
        return ndev-dev;
        
    }
};