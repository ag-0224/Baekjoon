#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<string> board;

int countRepaints(int x, int y) {
    int blackStarts = 0, whiteStarts = 0;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if ((i + j) % 2 == 0) {
                if (board[x + i][y + j] != 'B') blackStarts++;
                if (board[x + i][y + j] != 'W') whiteStarts++;
            }
            else {
                if (board[x + i][y + j] != 'W') blackStarts++;
                if (board[x + i][y + j] != 'B') whiteStarts++;
            }
        }
    }
    return min(blackStarts, whiteStarts);
}

int main() {
    cin >> n >> m;
    board.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> board[i];
    }

    int answer = 1e9;

    for (int i = 0; i + 7 < n; ++i) {
        for (int j = 0; j + 7 < m; ++j) {
            answer = min(answer, countRepaints(i, j));
        }
    }

    cout << answer << endl;

    return 0;
}