https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-30654/1

	int isDivisible(string s){
	   //   If the difference between the count of odd set bits (Bits set at odd positions) and even set bits is a multiple of 3 then the number is divisible by 3.
	   //  2^4 * a + 2^3 * b + 2^2 * c + 2^1 * d + 2^0 * e
	   //every even power of 2 can be represented as 3n + 1, and every odd power of 2 can be represented as 3n - 1
	   // 2^0 = 3 * 0 + 1
           //  2^1 = 3 * 1 - 1
           //  2^2 = 3 * 1 + 1
           //  2^3 = 3 * 3 - 1
	   //  (3n + 1) * a + (3n - 1) * b + (3n + 1) * c + (3n - 1) * d + (3n + 1) * e
	   //  (3n)(a + b + c + d + e) + (a - b + c - d + e)
	   //  To have this number divisible by 3, the term (a + c + e) - (b + d) should be divisible by 3. 
	   
	   int odd=0, even=0;
	   reverse(s.begin(), s.end());
	   
	   for(int i=0;i<s.size();i++){
	       //i+1 ->position whether odd or even
	       if( (i+1)%2==0){
	           //even
	           if(s[i]=='1')even++;
	       }
	       if( (i+1)%2==1){
	           //odd
	           if(s[i]=='1')odd++;
	       }
	   }
	   if( abs(odd-even)%3==0 ){
	       //divisible
	       return 1;
	   }
	   else return 0;
	}
