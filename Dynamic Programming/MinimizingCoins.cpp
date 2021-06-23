void argon17()
{
    int n, target;
    cin >> n >> target;
    vector<int> c(n);
    for (int &x : c) cin >> x;
    // dp[x] = minimum number of coins with sum x.
    // unbounded knapsack problem
    // infinity(1e9) is the minimum operation identity
    vector<int> dp(target + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= target; i++) {
        for (int j = 0; j < n; j++) {
            if (c[j] <= i)
                dp[i] = min(dp[i], 1 + dp[i - c[j]]);
        }
    }
    if (dp[target] == 1e9) cout << -1 << endl;
    else cout << dp[target] << endl;
}