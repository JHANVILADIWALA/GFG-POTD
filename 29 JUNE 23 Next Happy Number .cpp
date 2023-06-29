int isHappy(int n){
        if(n==1||n==7)
        {
            return true;
        }
        int sum=n; int curr=n;
    while(sum>9)
    {
            sum=0;
        while(curr>0)
        {
        int digit=curr%10;
        sum+=digit*digit;
        curr=curr/10;
        }
            if(sum==1) 
            {
                return true;
            }    
            
            curr=sum;
            
    }
        if(sum==7) return true;
        else return false;
    }
    int nextHappy(int N){
        int next=N+1;
        int res=next;
        while(true)
        {
            if(isHappy(next)) return next;
            
            next++;
            res=next;
        }
    }
