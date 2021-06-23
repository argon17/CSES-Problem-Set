void argon17()
{
    int n;
    cin >> n;
    // Note that the greedy solution of
    // always subtracting the maximum digit is also correct,
    // but we are practicing DP :)
    // dp[x] = minimum number of operations to go from x to zero.
    // infinity(1e9) is the minimum operation identity
    vector<int> dp(n + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= n; ++i) {
        int ii = i;
        while (ii) {
            dp[i] = min(dp[i], dp[i - ii % 10] + 1);
            ii /= 10;
        }
    }
    cout << dp[n];
}