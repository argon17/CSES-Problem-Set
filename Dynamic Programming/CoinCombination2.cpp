void argon17()
{
    int n, target;
    cin >> n >> target;
    vector<int> c(n);
    for (int &x : c) cin >> x;
    // dp[x] = unique number of ways to pick coins with sum x
    // 0 is the addition identity
    vector<int> dp(target + 1, 0);
    // empty set is the only way to make 0.
    dp[0] = 1;
    // Why just switching the order of loop works?
    // This is very interesting...
    // we first take one coin and then explore the ways to complete the target
    // then we take next coin and explore the ways to complete the target
    // In this way, we never repeat our ways as we are following the order
    for (int j = 0; j < n; j++) {
        for (int i = 1; i <= target; i++) {
            if (c[j] <= i)
                dp[i] = (dp[i] + dp[i - c[j]]) % hell;
        }
    }
    cout << dp[target] << endl;
}