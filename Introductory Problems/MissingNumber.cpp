void solve()
{
    ll n, sum = 0; cin>>n;
    rep(i, 1, n){
        ll x; cin>>x;
        sum += x;
    }
    cout<< n*(n+1)/2 - sum;
}
