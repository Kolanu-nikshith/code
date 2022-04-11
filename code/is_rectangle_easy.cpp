int Solution::solve(int A, int B, int C, int D) {
//using unordered_map 
    unordered_map<int, int> u;
    
    u[A] = u[A]+1;
    u[B] = u[B]+1;
    u[C] = u[C]+1;
    u[D] = u[D]+1;

    if(u.size()==2){
    for (auto x : u){
     if(x.second!=2) return 0;   
    }
    return 1;
    }
    else{
        return 0;
    }
  
  //simple and effective approach.
/*    if((A==B && C==D) || (A==C && B==D) || (A==D && B==C)){
        return 1;
    }
    return 0;
 */   
}
