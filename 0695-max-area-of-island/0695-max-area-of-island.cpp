class Solution {
public:

    int solveDfs(vector<vector<int>>& grid, int i , int j){

        if(i<0 || i>=grid.size() || j<0 || j>= grid[0].size()){
            return 0;
        }
        if(grid[i][j]==0){
            return 0;
        }
        else{
            grid[i][j] = 0;

            int Area = 1;

            Area+=solveDfs(grid, i+1, j);
            Area+=solveDfs(grid, i-1, j);
            Area+=solveDfs(grid, i, j+1);
            Area+=solveDfs(grid, i, j-1);

        
        return Area;
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int maxArea = 0;

        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){

                if(grid[i][j] == 1){

                    int currentArea = solveDfs(grid,i,j);

                    maxArea = max(maxArea, currentArea);

                }
            }
        }
        return maxArea;
    }
};