/*Example: “aba”
approach: Take the count of both vowel and consonants using a for loop.
now iterate over each char of string, whenever you find a vowel, the number of substrings that can be formed is equal to the number of consonants.so add count of consonants to answer. similarly, when you get consonants add the count of vowels to the answer.
explanation:
In “aba”, count of vowel=2, count of consonants=1,answer=0;
for iteration i=0, we found ‘a’, which is a vowel so we need consonant to make substring. here there is only one consonant so we will add 1 to the answer. and decrease the count of vowel by 1 as it is used.
count of vowel=1,count of consonants=1, answer=1;
for iteration i=1, we found ‘b’, which is consonant so add count of vowel to the answer. and decrease the count of consonants by 1;
count of vowel=1, count of consonants=0,answer=2;
for the last iteration, we will again get vowel but the answer remains the same as the count of consonants is 0,
so final answer is 2;
*/


bool isvowel(char ch){
    if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
        return true;
    else
        return false;
}


int Solution::solve(string A) {
    long long int res=0;
    int mod = 1e9+7;
    int v=0,c=0;
    for(int i=0;i<A.length();i++){
        if(isvowel(A[i])) v++;
        else c++;
    }
    for(int i=0;i<A.length();i++){
        if(isvowel(A[i])){
            res = (res+ c % mod)%mod;
            v--;
        }
        else{
            res = (res+v%mod) % mod;
            c--;
        }
    }
return res%mod;    
    
    
    
}
