void argon17()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) {
        cin >> x;
    }
    int mxVal = n * 1000;
    vector<vector<bool>> dp(n + 1, vector<bool> (mxVal + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= mxVal; ++j) {
            dp[i][j] = dp[i - 1][j];
            if (j >= a[i - 1])
                dp[i][j] = dp[i][j] || dp[i - 1][j - a[i - 1]];
        }
    }
    vector<int> possible;
    for (int sum = 1; sum <= mxVal; ++sum) {
        if (dp[n][sum]) possible.pb(sum);
    }
    cout << sz(possible) << endl;
    for (auto it : possible)
        cout << it << " ";
}