


string Solution::solve(string A, int B) {
    
    int i=0;
  
  // in while loop use A.length() because with A.erase(), size if changing.
    while(i<A.length()){
      //string(B, A[i]) creates string of length B of all A[i] characters.
      //substr(index, integer length of characters from index) == string(int, char)
        if(A.substr(i,B)==string(B, A[i]))
            A.erase(i,B);
        else
        i++;
    }
    return A;
 
}
