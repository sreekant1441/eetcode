/*min path sum

Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.

Input: grid = [[1,3,1],[1,5,1],[4,2,1]]
Output: 7
Explanation: Because the path 1 → 3 → 1 → 1 → 1 minimizes the sum.


Input: grid = [[1,2,3],[4,5,6]]
Output: 12

*/

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        for(int i=1;i<grid.size();i++){
            grid[i][0] += grid[i-1][0];
            cout << grid[i][0] << " \n";
        }
        for(int j=1;j<grid[0].size();j++){
            grid[0][j] += grid[0][j-1];
            cout << grid[0][j] << "\n";
        }
        for(int i=1;i<grid.size();i++){
            for(int j=1;j<grid[0].size();j++){
                grid[i][j] +=min(grid[i-1][j], grid[i][j-1]);
                cout << grid[i][j] << "\n";
            }
        }
    return grid[grid.size()-1][grid[0].size()-1];    
    }
};
