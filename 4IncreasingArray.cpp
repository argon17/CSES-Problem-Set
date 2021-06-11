void solve()
{
    ll n; cin>>n;
    ll ans = 0, mx = 0;
    rep(i, 0, n){
        ll x; cin>>x;
        mx = max(x, mx);
        ans += mx-x;
    }
    cout<<ans;
}
