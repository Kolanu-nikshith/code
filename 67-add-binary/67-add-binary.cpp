class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1, j=b.size()-1, carry=0;
        string res;
        while(i>=0 || j>=0 || carry){
            int x = i<0?0:a[i--]-'0';
            int y = j<0?0:b[j--]-'0';
            int sum = x+y+carry;
            if(sum==1){
                carry = 0;                
            }
            else if(sum==2 or sum==3){
                carry =1;
            }
            res.push_back(sum%2+'0');
        }
        cout<<res;
        reverse(res.begin(), res.end());
        return res;
        
        
    }
};