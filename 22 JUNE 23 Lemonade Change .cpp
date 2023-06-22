https://practice.geeksforgeeks.org/problems/lemonade-change/1

bool lemonadeChange(int N, vector<int> &bills) {
        map<int,int>m;
        int sum=0;
        // 5->0 coin
        // 10->1 5$ coin
        // 20->10+5 || 5+5+5 coin
        for(int i=0 ; i<bills.size(); i++ ){
            if(bills[i]==10){
                if(m[5]>0)m[5]--;
                else return false;
            }
            if(bills[i]==20){
                if( m[10]>0 && m[5]>0 ){
                    m[10]--;
                    m[5]--;
                }
                else if(m[5]>=3)m[5]-=3;
                else return false;
            }
            m[bills[i]]++;
        }
        return true;
    }
