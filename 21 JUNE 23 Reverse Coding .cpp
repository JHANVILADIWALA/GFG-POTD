https://practice.geeksforgeeks.org/problems/reverse-coding2452/1

int sumOfNaturals(int n) {
         long long mod=1e9+7;
         long long numer = ( n%mod * (n+1)%mod );
           long long sum= numer/2;
          
         return sum%mod;
    }
