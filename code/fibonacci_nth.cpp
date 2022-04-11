//use fast exponentiation and operator overloading.
//refer notes for concept;


vector<long> v={1,1,1,0};
const int m = 1000000007;

vector<long> operator*(vector<long> a, vector<long> b){
    
    return {
        (long(a[0]*b[0])%m + long(a[1]*b[2])%m    )%m,
        (long(a[0]*b[1])%m + long(a[1]*b[3])%m    )%m,
        (long(a[2]*b[0])%m + long(a[3]*b[1])%m    )%m,
        (long(a[2]*b[1])%m + long(a[3]*b[3])%m    )%m
        
    };
    
    
}

vector<long> power(int n){
    
    if(n==1) return v;
    vector<long> v1 = power(n/2);
    return n%2? (v1*v1*v): v1*v1;
    
}

int Solution::solve(int A) {
    return power(A-1)[0];
}

