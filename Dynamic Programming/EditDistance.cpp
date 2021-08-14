void argon17()
{
    string s1, s2;
    cin>>s1>>s2;
    int m = sz(s1), n = sz(s2);
    vector<vector<int>> dp(m+1, vector<int> (n+1, 0));
    for(int i=0; i<=m; ++i){
        for(int j=0; j<=n; ++j){
            if(i==0 || j==0)
                dp[i][j] = i+j;
            else{
                if(s1[i-1]==s2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else dp[i][j] = 1+min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]});
            }
        }
    }
    cout<<dp[m][n]<<endl;
}