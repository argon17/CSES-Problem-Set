void solve()
{
    ll n; cin>>n;
    cout<<n;
    while(n>1){
        if(n&1) n  = n*3 + 1;
        else n = n>>1;
        cout<<" "<<n;
    }
}
