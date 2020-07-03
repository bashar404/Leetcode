class Solution 
{
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix.size();j++)
            {
                if(i<j)
                swap(matrix[i][j],matrix[j][i]); 
            }
        }
            
        for(int i=0; i<matrix.size();i++)
            reverse(matrix[i].begin(),matrix[i].end());
                
            
    }
};

/*
first, we need to do transpose(row into column) then reverse

[
[1,2,3],
[4,5,6],
[7,8,9]
]
step 1: find the transpose of the matrix.
after tranposing it looks something like this.
[
[1,4,7],
[2,5,8],
[3,6,9]
]
step 2: reverse individual vectors with in 2d vector.
[
[7,4,1],
[8,5,2],
[9,6,3]
]
This is our required answer..
*/