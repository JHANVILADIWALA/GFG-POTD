https://practice.geeksforgeeks.org/problems/copy-set-bits-in-range0623/1

int setSetBit(int x, int y, int l, int r){
        
        int ex = x;
        for(int i=1; i<l; i++){
            ex>>=1;
            y>>=1;
        }
        int num=0;
        int n = r-l+1;
        for(int i=l; i<=r ; i++){
            if( y&1 ==1){
                //already set in y
                //set it in num
                //setting ith bit in num
               num = ( num ) | ( 1<<(i-1) );
            }
            ex>>=1;
            y>>=1;
        }
        
        return  x|num ;
    }
