class Solution {
public:

vector<int> _sieve (int n) 
{ 

    
    bool prime[n + 1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p = 2; p * p <= n; p++) { 
       
        if (prime[p] == true) { 
           
            for (int i = p * p; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
  
   vector<int> tot;
    for (int p = 2; p < n; p++) 
        if (prime[p]) 
            tot.push_back(p);
    
    return tot;
} 
    vector<vector<int>> findPrimePairs(int n) {
   int lp = 0;
   vector<int> u = _sieve(n);
   int rp = u.size() - 1;
   vector<int> temppair;
   temppair.push_back(0);
   temppair.push_back(0);
        
        

   vector<vector<int>> result;
        if(n==1 || n==2 || n==3)
            return result;
        if(n==4)
            return {{2,2}};
   while (lp <= rp) {
       try {
           if (u[lp] + u[rp] > n) {
               if (rp > 0) {
                  rp--;
               }
           } else if (u[lp] + u[rp] < n) {
               if (lp < u.size() - 1) {
                  lp++;
               }
           } else {
               temppair[0] = u[lp];
               temppair[1] = u[rp];
               result.push_back(temppair);
               if (rp > 0 && lp < u.size() - 1) {
                  rp--;
                  lp++;
               }
           }
       }
       catch (exception e) {
           cout << "Exception: " << e.what();
       }
   }
   return result;
}

};