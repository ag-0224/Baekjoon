#include <iostream>
#include <vector>

using namespace std;

int n, m, b;
int ans_time = 99999999;
int ans_height = 0;

vector <vector<int>> board;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n >> m >> b;

    board = vector<vector<int>>(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    for (int h = 0; h <= 256; h++) {
        int build = 0;
        int remove = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] > h) {
                    remove += (board[i][j] - h);
                }
                else if (board[i][j] < h) {
                    build += (h - board[i][j]);
                }
            }
        }

        if (b + remove >= build) {
            int time = 2 * remove + build;
            if (ans_time >= time) {
                ans_time = time;
                ans_height = h;
            }
        }
    }
    
    cout << ans_time << " " << ans_height;

    return 0;
}