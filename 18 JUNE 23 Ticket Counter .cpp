https://practice.geeksforgeeks.org/problems/ticket-counter-2731/1

int distributeTicket(int n, int k) {
         int cut= n / (2*k);  // 5/(2*2) = 1
         
         int left= 1 + (cut*k);
         int right = n - (cut*k);
         
         if(right<left){
             return left;
         }
         if(right - left +1 <=k ){
             return right;
         }
         else {
             left+=k;
             return left;
         }
         
    }
