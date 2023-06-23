https://practice.geeksforgeeks.org/problems/task-scheduler/1

int leastInterval(int n, int k, vector<char> &tasks) {
         map< char,int >m;
         int maxi=0;
         for(int i=0;i<tasks.size();i++){
             m[tasks[i]]++;
         }
         for(auto it:m){
             maxi= max( maxi, it.second );
         }
         int x=0;
         for(auto it:m){
             if(it.second==maxi)x++;
         }
         return max(n, maxi + k*(maxi-1) + x-1 );
    }
