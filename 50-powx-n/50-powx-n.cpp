class Solution {
public:
    double myPow(double x, int nn) {
        long long int n=nn;
        if(n<0)n*=-1;
        double ans=1;
        while(n>0){
            if(n%2) {
                ans = ans*x;
                n--;
                
            }
            else{
                x = x*x;
                n/=2;
            }
        }
        if(nn < 0) return (double) 1.0/(double) ans;
        else return ans;
    }
};