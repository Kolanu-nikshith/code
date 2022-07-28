class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        string arr[numRows];
        int row=0;
        bool down =true;
        for(int i =0 ; i<s.size();i++){
          arr[row].push_back(s[i]);//keep on inserting in this array
          if(row==numRows-1) down= false ;//here when we are in last row we need to go up size in zig zack manner so reversed the direction
          else if (row==0)  down = true;
          if(down) row++;//if we are  not currently in the  last row then we can proceed to the next row 
          else {
            row--;// otherwise go to previous row 
          }
        }
      string ans="";
      for(int i =0 ; i<numRows;i++)
      {
        ans+=arr[i];
      }
      return ans ;
    }
};