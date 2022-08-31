class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& d) {
        
        
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i:nums){
            pq.push(i);
        }
        int g = d[0];
        for(int i=1;i<d.size();i++){        
            g = __gcd(d[i], g);
        }
        int c=0;
        while(!pq.empty()){
            int top = pq.top();
            pq.pop();
            if(g%top == 0){
                return c;
            }
            else if(top > g){
                return -1;
            }
            c++;
        }
        return -1;
    }
};