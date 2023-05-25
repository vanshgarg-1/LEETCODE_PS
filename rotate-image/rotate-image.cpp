class Solution {
public:
void reverse2DArray(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows / 2; i++) {
        for (int j = 0; j < cols; j++) {
            // Swap elements between top and bottom rows
            int temp = matrix[i][j];
            matrix[i][j] = matrix[rows - 1 - i][j];
            matrix[rows - 1 - i][j] = temp;
        }
    }
}

    void rotate(vector<vector<int>>& matrix) {
        // using inbuilt functions 
       reverse2DArray(matrix);
        int n = matrix.size();
        for (int i = 0 ; i<n ; i++)
        {
            for (int j = i; j<n ; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }      
    }
};