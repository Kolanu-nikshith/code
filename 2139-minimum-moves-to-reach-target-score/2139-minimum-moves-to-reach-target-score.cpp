class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        
        int num=target;
        int c=0;
        while(num!=1){
            if(num%2 ==0 and maxDoubles > 0){
                num/=2;
                c++;
                maxDoubles--;
            }
            else if (maxDoubles !=0){
                c++;
                num--;
            }        
            else{
                c += num-1;
                num=1;
            }
        }
        return c;
        
        
    }
};