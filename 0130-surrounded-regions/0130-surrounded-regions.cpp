class Solution {
public:
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    void dfs(vector<vector<char>>& board, int x, int y) {
        int m = board.size();
        int n = board[0].size();

        if (x < 0 || x >= m || y < 0 || y >= n ||
            board[x][y] != 'O')
            return;

        board[x][y] = '#';

        for (int k = 0; k < 4; k++) {
            dfs(board, x + dx[k], y + dy[k]);
        }
    }

    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();

        if (m == 0 || n == 0) return;

        // Check first and last columns
        for (int i = 0; i < m; i++) {
            if (board[i][0] == 'O')
                dfs(board, i, 0);

            if (board[i][n - 1] == 'O')
                dfs(board, i, n - 1);
        }

        // Check first and last rows
        for (int j = 0; j < n; j++) {
            if (board[0][j] == 'O')
                dfs(board, 0, j);

            if (board[m - 1][j] == 'O')
                dfs(board, m - 1, j);
        }

        // Convert remaining O to X and restore safe cells
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O')
                    board[i][j] = 'X';

                else if (board[i][j] == '#')
                    board[i][j] = 'O';
            }
        }
    }
};