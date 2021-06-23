void argon17()
{
    int n, x;
    cin >> n >> x;
    vector<int> prices(n), pages(n);
    for (int &v : prices) cin >> v;
    for (int &v : pages) cin >> v;
    // dp[x] = maximum number of pages we can get for price at most x
    // 0-1 knapsack problem
    // 0 is the addition identity
    vector<int> dp(x + 1, 0);
    // loop for books
    for (int i = 0; i < n; ++i) {
        // loop for price from last
        // why from last?
        // This is interesting...
        // the current/new book will be assigned always to the dp[x] first
        // and then dp[x-1...0]
        // calculation of dp[x] depends on dp[x-some v]
        // dp[x- some v] won't have this current book
        // and in this way we're making sure we don't pick same book again
        for (int j = x; j >= prices[i]; --j) {
            dp[j] = max(dp[j], pages[i] + dp[j - prices[i]]);
        }
    }
    cout << dp[x];
}