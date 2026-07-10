class NumMatrix {
public:

    // Prefix Sum Matrix
    vector<vector<int>> prefix;

    NumMatrix(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        // Extra row and column simplify calculations.
        prefix.resize(rows + 1, vector<int>(cols + 1, 0));

        // Build 2D Prefix Sum Matrix.
        for(int r = 1; r <= rows; r++)
        {
            for(int c = 1; c <= cols; c++)
            {
                prefix[r][c] =
                    matrix[r - 1][c - 1]
                    + prefix[r - 1][c]
                    + prefix[r][c - 1]
                    - prefix[r - 1][c - 1];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {

        // Convert to 1-based indexing.
        row1++;
        col1++;
        row2++;
        col2++;

        // Rectangle Sum Formula
        return prefix[row2][col2]
             - prefix[row1 - 1][col2]
             - prefix[row2][col1 - 1]
             + prefix[row1 - 1][col1 - 1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */