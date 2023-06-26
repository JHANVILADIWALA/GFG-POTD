https://practice.geeksforgeeks.org/problems/ncr1019/1

const int mod= 1e9 + 7;
    long long expo(long long x, long long y, long long mod){
        long long ans =1;
        while(y){
            if(y&1){
                ans = (ans*x)%mod;
            }
            x = (x * x)%mod;
            y>>=1;
        }
        return ans;
    }
    int nCr(int n, int r){
         if(n<r)return 0;
         
         
         vector<long long>fact(1000,1);
         
         for(int i=2; i<1001; i++){
             fact[i]= (i*fact[i-1])%mod;
         }
         int den = ( fact[n-r]*fact[r])%mod;
         int inv = expo(den,mod-2, mod);
         
         int ans = (fact[n]*inv)%mod;
         return ans;
         
    }
