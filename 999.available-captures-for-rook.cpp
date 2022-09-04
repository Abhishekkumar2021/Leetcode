/*
 * @lc app=leetcode id=999 lang=cpp
 *
 * [999] Available Captures for Rook
 */

// @lc code=start
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int h,v;
        int cnt=0;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(board[i][j]=='R'){
                    v=i;
                    h=j;
                    break;
                }
            }
        }
        for(int i=h+1;i<8;i++){
            if(board[v][i]!='.'){
                if(board[v][i]=='p') cnt++;
                break;
            }
        }
        for(int i=h-1;i>=0;i--){
            if(board[v][i]!='.'){
                if(board[v][i]=='p') cnt++;
                break;
            }
        }
        for(int i=v+1;i<8;i++){
            if(board[i][h]!='.'){
                if(board[i][h]=='p') cnt++;
                break;
            }
        }
        for(int i=v-1;i>=0;i--){
            if(board[i][h]!='.'){
                if(board[i][h]=='p') cnt++;
                break;
            }
        }
        return cnt;
        
    }
};
// @lc code=end

