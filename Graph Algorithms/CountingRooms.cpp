int dirs[] = {0, 1, 0, -1, 0};

bool isOK(int r, int c, vector<string> &g) {
    return r >= 0 && c >= 0 && r < g.size() && c < g[0].length() && g[r][c] == '.';
}

void dfs(int r, int c, vector<string> &g) {
    g[r][c] = '#';
    for (int i = 0; i < 4; ++i) {
        int nr = r + dirs[i], nc = c + dirs[i + 1];
        if (isOK(nr, nc, g)) {
            dfs(nr, nc, g);
        }
    }
}

void argon17()
{
    int rows, cols;
    cin >> rows >> cols;
    vector<string> g(rows);
    for (string &x : g) {
        cin >> x;
    }
    int ans = 0;
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (isOK(r, c, g)) {
                ++ans;
                dfs(r, c, g);
            }
        }
    }
    cout << ans << endl;
}