//assume all numbers from 0 to N are primes.
//from 2 to sqrt(N), if it is prime,make all its multiples non primes.
//for 2, loop runs for n/2 times
//for 3, n/3 times.
// n/2 + n/3 + n/5 + n/7 + ... (Harmonic progression). (LogLog(N))
//overall complexity is : N log log(N)

vector<int> Solution::sieve(int A) {
    vector<int> res;
    vector<int> primes(A+1, 1);
    primes[0]=primes[1] = 0;
    int n=A;
    
    for(int i=2;i<=sqrt(n);i++){
        if(primes[i]==1){
            for(int j=2;i*j<=A;j++){
                primes[i*j]=0;
            }
        }
    }
    
    for(int i=0;i<=n;i++){
        if(primes[i]==1)
        res.push_back(i);
        
    }
    return res;
}
