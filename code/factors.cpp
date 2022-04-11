//if a is factor b=n/a is also a factor.
//that is a*b=n;
//sqrt(36) = 6*6. So, handle this case and sort the array before returning.
// https://www.interviewbit.com/old/problems/all-factors/
vector Solution::allFactors(int A) {
    vector ret;
    for(int i=1;i<sqrt(A);i++){
        if(A%i==0) ret.push_back(i);
    }
    for(int i=sqrt(A);i>=1;i–){
        if(A%i==0) ret.push_back(A/i);
    }
    return ret;
}



vector Solution::allFactors(int A) {
vector<int>ans;
for(int i=1;i<=sqrt(A);i++)
{
    if(A%i==0)
    {
        if(i!=sqrt(A))
        {
        ans.push_back(i);
        ans.push_back(A/i);
        }
        else
        {
        ans.push_back(i);
        }
    }
}

//ans.push_back(A);
sort(ans.begin(),ans.end());
return ans;
}
