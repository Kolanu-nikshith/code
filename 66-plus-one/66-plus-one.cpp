class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string s;
        for(int i:digits){
            s+=to_string(i);
        }
                vector<int> v;

        string res;
        int n = s.size(), carry = 0, flag = 1;
        for(int i=n-1;i>=0 or carry;i--){
            int x = i>=0?s[i]-'0':0;
            int y = flag?1:0;
            flag = 0;
            int sum = x+y+carry;
            carry = sum/10;
            v.push_back(sum%10);
            // res.push_back(sum%10+'0');
           // cout<<"sum: "<<sum<<" carry: "<<carry<<" res:"<<sum%10<<endl;   
        }
        // cout<<res;
        reverse(v.begin(),v.end());
        // for(char c: res){
        //     v.push_back(c-'0');
        // }
        return v;

    
    }
};