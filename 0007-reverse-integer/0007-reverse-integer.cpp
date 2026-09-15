class Solution {
public:

    
    int reverse(int x) {
        long long num=0;
        while(x!=0){
            int d=x%10;
            if((num>INT_MAX/10)||(num<INT_MIN/10)){
                return 0;
            }
            num=num*10+d;
            x/=10;
        }
        
        return num;

    }

};