class Solution {
public:
    int largestInteger(int num) {
        string snum = to_string(num), result;
        priority_queue<int> even, odd;
        int rtn_val;
        
        for(int i=0; i < snum.length(); i++){
            if(((int)snum[i]) % 2 == 0){
                even.push((int)snum[i]-48);
            }else{
                odd.push((int)snum[i]-48);
            }
        }
        for(int i=0; i < snum.length(); i++){
            if(((int)snum[i]) % 2 == 0){
                string s = to_string(even.top());
                even.pop();
                result += s;
            }else{
                string s = to_string(odd.top());
                odd.pop();
                result += s;
            }
        }
        rtn_val = stoi(result);
        return rtn_val;
    } 
        
    
};