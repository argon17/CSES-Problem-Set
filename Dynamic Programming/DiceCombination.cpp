void argon17()
{
    int n;
    cin >> n;
    // dp[x] = number of ways to make sum x using numbers from 1 to 6.
    // Sum over the last number used to create x, it was some number between 1 and 6.
    // For example, the number of ways to make sum x ending with a 3 is dp[x-3].
    // Summing over the possibilities gives
    // dp[x] = dp[x-1] + dp[x-2] + dp[x-3] + dp[x-4] + dp[x-5] + dp[x-6].

    // 0 is the addition identity
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (j <= i)
                dp[i] = (dp[i] + dp[i - j]) % hell;
        }
    }
    cout << dp[n] << endl;
}