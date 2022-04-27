/*
 * @lc app=leetcode id=1202 lang=cpp
 *
 * [1202] Smallest String With Swaps
 */

// @lc code=start
class Solution {
public:
    //using dfs.
    
//     Algorithm:
// 1. Make a graph using the pairs.
// 2. Then find out all the connected components by dfs.
// 3. For all components, store the positions and characters in an array during the dfs traversal.
// 4. Sort the position array and characters array.
// 5. Traverse through the position array and replace the character of each position from the character array.
// 6. Time Complexity: O(nlogn)
    
    vector<int> graph[100001];
    vector<int> pos;
    vector<char> ch;
    bool flag[100001] = {false};
    string st;
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n = pairs.size();
        st=s;
        for(int i=0;i<n;i++){
            graph[pairs[i][0]].push_back(pairs[i][1]);
            graph[pairs[i][1]].push_back(pairs[i][0]);
        }
        
        for(int i=0;i<n;i++){
            if(!flag[i]){
                pos.clear();
                ch.clear();
                dfs(i);
                
                sort(pos.begin(), pos.end());
                sort(ch.begin(), ch.end());
                
                for(int j=0;j<pos.size();j++){
                    st[pos[j]] = ch[j];
                }
            }
        }
        return st;
    }
    
    void dfs(int start){
        
        flag[start] = true;
        pos.push_back(start);
        ch.push_back(st[start]);
        
        for(int v:graph[start]){
            if(!flag[v]){
                dfs(v);
            }
        }        
    }
};
// @lc code=end

