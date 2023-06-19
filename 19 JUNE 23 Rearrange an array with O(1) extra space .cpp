https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1

     //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        
        // if an element a is incremented by b*n
        // element becomes a + b*n so when a + b*n  
        // divided by n then the value is b 
        // a + b*n % n is a
        
        for(int i=0;i<n;i++){
            arr[i] += (arr[arr[i]] %n) * n; //%n so that it becomes less than n
        }
        for(int i=0;i<n;i++){
            arr[i]/=n  ;
             
        }
    }
