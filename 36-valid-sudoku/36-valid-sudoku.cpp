class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char> s1, s2;
        for(int i=0;i<9;i++){
            s1.clear();
            s2.clear();
            for(int j=0;j<9;j++){
                if(isdigit(board[i][j])){
                    if(s1.count(board[i][j]) > 0)
                        return false;
                    s1.insert(board[i][j]);
                }

                if(isdigit(board[j][i])){
                    if(s2.count(board[j][i]) > 0)
                        return false;
                    s2.insert(board[j][i]);
                }
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                s1.clear();
                for(int p=0;p<3;p++){
                    for(int q=0;q<3;q++){
                        if(isdigit(board[i+p][j+q])){
                            if(s1.count(board[i+p][j+q]) > 0)
                                return false;
                            s1.insert(board[i+p][j+q]);
                        }

                    }
                }
            }
        }
        return true;
        
    }
};