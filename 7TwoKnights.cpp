void solve()
{
    ll n; cin>>n;
    rep(i, 1, n+1){
        ll sz = i*i;
        ll ans = sz*(sz-1)/2;
        if(i>2) ans -= 4*(i-1)*(i-2); // read points.md chessboard
        cout<<ans<<endl;
    }
}
