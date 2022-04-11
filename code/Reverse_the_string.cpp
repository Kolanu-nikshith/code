/*
string Solution::solve(string A) 
{
    string ans="", w;
    stringstream ss(A);
    //while loop runs for each word.
    
    
    while(ss >> word)
        ans = " "+ word + ans;
    return(ans.substr(1));
}


*/
string Solution::solve(string s) {
    
    stack<string>stk;
    int n=s.length(),i=0;
    while(i<n)
    {
        string tmp="";
        while(i<n && s[i]!=' ')
        {
            tmp.push_back(s[i]);
            i++;
        }
        if(tmp!="")
        {
            stk.push(tmp);
        }
        i++;
    }
    s="";
    while(!stk.empty())
    {
        s+=stk.top();
        if(stk.size()>1)
        {
            s+=" ";
        }
        stk.pop();
    }
    return s;
 
}
