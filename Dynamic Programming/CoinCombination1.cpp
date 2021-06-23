void argon17()
{
    int n, target;
    cin >> n >> target;
    vector<int> c(n);
    for (int &x : c) cin >> x;
    // dp[x] = number of ways to make value x.
    // 0 is the addition identity
    vector<int> dp(target + 1, 0);
    // empty set is the only way to make 0.
    dp[0] = 1;
    for (int i = 1; i <= target; i++) {
        for (int j = 0; j < n; j++) {
            if (c[j] <= i)
                dp[i] = (dp[i] + dp[i - c[j]]) % hell;
        }
    }
    cout << dp[target] << endl;
}