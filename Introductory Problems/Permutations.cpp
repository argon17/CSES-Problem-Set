void solve()
{
    ll n; cin>>n;
    if(n==1){
        cout<<1;
        return;
    }
    if(n==2 || n==3){
        cout<<"NO SOLUTION";
        return;
    }
    for(ll i=2; i<=n; i+=2) cout<<i<<" ";
    for(ll i=1; i<=n; i+=2) cout<<i<<" ";
}
