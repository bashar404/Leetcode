class Solution {
    void mark_as_2(vector<vector<char>>&grid, int x, int y, int r, int c)
    {
        if(x<0||x>=r||y<0||y>=c||grid[x][y]!='1')
            return;
        grid[x][y]='2';
        mark_as_2(grid,x+1,y,r,c);
        mark_as_2(grid,x-1,y,r,c);
        mark_as_2(grid,x,y+1,r,c);
        mark_as_2(grid,x,y-1,r,c);
    }
public:
    
    int numIslands(vector<vector<char>>& grid) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        int no_of_island=0;
        int rows=grid.size();
        int cols=grid[0].size();
        
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                if(grid[i][j]=='1')
                {
                    mark_as_2(grid,i,j,rows,cols);
                    no_of_island++;
                }
            }
        }
        return no_of_island;
    }
};
