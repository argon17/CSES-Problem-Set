void argon17()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (string &x : s) cin >> x;
    // dp[r][c] = number of ways to reach row r, column c
    // 0 is the addition identity
    vector<vector<int>> dp(n, vector<int>(n, 0));
    // there is one way to reach (0,0)
    dp[0][0] = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != 0) {
                dp[i][j] += dp[i - 1][j];
            }
            if (j != 0) {
                dp[i][j] += dp[i][j - 1];
            }
            dp[i][j] %= hell;
            if (s[i][j] == '*') dp[i][j] = 0;
        }
    }
    cout << dp[n - 1][n - 1];

}