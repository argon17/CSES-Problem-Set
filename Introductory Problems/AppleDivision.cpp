void solve()
{
    ll n; cin>>n;
    vi p(n);
    ll s = 0, d1 = 0;
    rep(i, 0, n)
        cin>>p[i], s += p[i];
    cerr<<s<<endl;
    rep(i, 0, 1<<n){
        ll cs = 0;
        rep(j, 0, n){
            // if jth bit of i is set, also i&(1<<j)
            if((i>>j)&1) cs += p[j];
        }
        if(cs<=s/2) d1 = max(cs, d1);
    }
    // d2 - d1 = (s-d1) - d1 = s - 2*d1
    cerr<<d1<<endl;
    cout<<s-2*d1;
}
