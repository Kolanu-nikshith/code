string Solution::countAndSay(int A) {
    
    int n=A;
    if(n==1) return "1";
    if(n==2) return "11";
    string s="11";
    
  //count how many are consecutive and convert that count to string.
  //use a delimiter '$' or something. if "21" is there, if you dont use delimiter, last 1 in 21 will go unchecked. 
  
  
    for(int i=3;i<=n;i++){
        
        string t="";
        s=s+'$';
        int c=1;
        for(int j=1;j<s.length();j++){
            if(s[j]==s[j-1]) c++;
            else{
                t+= to_string(c);
                t+=s[j-1];
                c=1;
            }
        }
        s=t;
    }
return s;
    
}
