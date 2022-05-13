class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            
//         vector<int> s1(256,-1);
//         int start=-1;int m=0;
//         for(int i=0;i<s.length();++i){
//             if(s1[s[i]]>start)
//                 start=s1[s[i]];
//             s1[s[i]]=i;
//             m=max(m,i-start);
//         }
        
//         return m;
            
           
            int start = -1, end = 0;
            vector<int> v(256, -1); 
            int ans=0;
            for(end=0; end<s.size();end++){
                int currEle = s[end];
                if(v[currEle] > start){
                    start = v[currEle];
                }
                v[currEle] = end;
                ans = max(ans, end-start);
           }
            return ans;
        }
};