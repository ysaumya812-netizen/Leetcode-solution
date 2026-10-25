class Solution {
public:
    int mirrorDistance(int n) {
        int rem=0;
        int og=n;
        while(n>0){
            
            int n1=n%10;
            rem=rem*10+n1;
            n=n/10;
        }
        return abs(og-rem);
    }
};