int dirs[] = {0, 1, 0, -1, 0};
string moves = "RDLU";
string ans;
int mov[1001][1001];
string path[1001];
int si, sj, ei, ej;
int vis[1001][1001];

bool isOK(int r, int c, vector<string> &g, int rows, int cols) {
    return r >= 0 && c >= 0 && r < rows && c < cols && g[r][c] == '.' && !vis[r][c];
}

void argon17()
{
    int rows, cols;
    cin >> rows >> cols;
    vector<string> g(rows);
    for (int r = 0; r < rows; ++r) {
        string x;
        cin >> x;
        g[r] = x;
        for (int i = 0; i < cols; ++i) {
            if (x[i] == 'A') {
                si = r, sj = i, g[r][i] = '.';
            }
            else if (x[i] == 'B') {
                ei = r, ej = i, g[r][i] = '.';
            }
        }
        path[r] = string(cols, 0);
    }
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = 1;
    while (q.size()) {
        auto cur = q.front();
        q.pop();
        int r = cur.ff, c = cur.ss;
        for (int i = 0; i < 4; ++i) {
            int nr = r + dirs[i], nc = c + dirs[i + 1];
            if (isOK(nr, nc, g, rows, cols)) {
                q.push({nr, nc});
                mov[nr][nc] = i;
                path[nr][nc] = moves[i];
                vis[nr][nc] = 1;
            }
        }
    }
    if (path[ei][ej]) {
        yes;
        while (si ^ ei || sj ^ ej) {
            ans += path[ei][ej];
            int d = mov[ei][ej] ^ 2;
            ei += dirs[d];
            ej += dirs[d + 1];
        }
        reverse(all(ans));
        cout << ans.size() << endl;
        cout << ans << endl;
    } else no;
}