https://practice.geeksforgeeks.org/problems/prefix-match-with-other-strings/1

int klengthpref(string arr[], int n, int k, string str){    
        string org = "";
        for(int i=0; i<k; i++){
            org+= str[i];
        }
        int ckt=0;
         
        for( int i=0 ;i <n ;i++){
            
            if( arr[i].substr(0,k) == org )ckt++;
        }
        return ckt;
    }
