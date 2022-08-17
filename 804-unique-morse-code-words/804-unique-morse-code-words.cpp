class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> s;
        
        vector<string> v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(string t:words){
            string temp;
            for(char c:t){
                temp = temp + v[c-'a'];
            }
            s.insert(temp);
        }
        return s.size();
        
    }
};