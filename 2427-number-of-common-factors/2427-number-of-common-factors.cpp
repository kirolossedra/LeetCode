class Solution {
public:
    int commonFactors(int a, int b) {
        int pivot = min(a,b);
        int count = 0;
        if(! (max(a,b) % min(a,b)))
            count++;
        for(int i=1; i<= pivot/2; i++){
            
            if(not((a%i) or (b%i)))
                count++;
        }
        return count;
    }
};