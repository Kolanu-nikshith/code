//So according to question, N=A^§
//=> log(N)=P*log(A)
//=> P=log(N)/log(A)
//and P has to be integer, So log(N)%log(A) ==0
//So I will divide both and check if fractional part is very very less i.e 10^-9
//If yes then P is an integer.

int Solution::isPower(int A) {
    if(A==1) return 1;

    for(int i=1;i<=sqrt(n);i++){
        if(float(log(A)/log(i)) == int(log(A)/log(i))  ){
            return 1;
        }
    }
    return 0;
    
}
