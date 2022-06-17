class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); // ---> Number of rows
        int n = matrix[0].size(); // ---> Number of columns
        
        //we initially set the outer first row and first column to 0 
        int x=1,y=1;
        // if there is any value that is zero then we set x to 0 from 1
        for(int j = 0 ; j < n ; j++ ) if(matrix[0][j] == 0) x = 0;//1st row
        for(int i = 0 ; i < m ; i++ ) if(matrix[i][0] == 0) y = 0;//1st column
        // now iterating inside the inner loop if any of the value of element is 0 then setting the corresponding              index in first row and column as zero 
        for(int i = 1;i<m;i++){
            for(int j = 1 ; j < n;j++){
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        //at this step we get the indices filled in outer loop
        // now assigning zero inside the matrix elements
        for(int j = 1 ;j < n ;j++){
            if(matrix[0][j] == 0){
                for(int i = 1;i<m;i++) matrix[i][j] = 0;
            } 
        }
        for(int i = 1 ;i < m ;i++){
            if(matrix[i][0] == 0) for(int j = 1;j<n;j++) matrix[i][j] = 0;
        }
        // now we have finished setting zeros for inner matrix 
        // now we assign zeros for our marker matrix
        if(y == 0) for(int i = 0 ; i < m; i++) matrix[i][0] = 0;    
        if(x == 0) for(int j = 0 ; j < n; j++) matrix[0][j] = 0;    
        
    }
};