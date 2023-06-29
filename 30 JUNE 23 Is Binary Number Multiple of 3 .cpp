https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-30654/1

int isDivisible(string s){
	   //   If the difference between the count of odd set bits (Bits set at odd positions) and even set bits is a multiple of 3 then the number is divisible by 3.
	      
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
