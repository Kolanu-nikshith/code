class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int num:nums){
            s.insert(num);
        }
        int  m=0;
        for(int num:nums){
            if(!s.count(num-1)){
                int st=1;
                int y=num+1;
                while(s.count(y)){
                    y++;
                    st++;
                }
                
                m = max(m , st);
            }
            
        }
        return m;
        
        
    }
};