void solve()
{
    ll r, c, ans;
    cin>>r>>c;
    ll mx = max(r, c);
    ll dg = mx*mx - mx + 1;
    if( r>c ) ans = mx&1 ? dg - (r-c) : dg + (r-c);
    else ans = mx&1 ? dg - (r-c) : dg + (r-c);
    cout<<ans<<endl;
}
