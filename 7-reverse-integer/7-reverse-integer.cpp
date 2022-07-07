class Solution {
public:
    int reverse(int x) {
        bool neg=false;
        if(x==INT_MIN) return 0;
        if(x<0){
            neg=true;
            x=-(x);
        }
        int y=0;
        while(x){
            int rem = x%10;
            if(1L* y*10 + rem > pow(2,31)){
                return 0;
            }
            y = y*10+rem;
            x/=10;
        }
        return neg?-(y):y;
        
    
        
    }
};