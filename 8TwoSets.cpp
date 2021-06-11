void solve()
{
    ll n; cin>>n;
    if((n*(n+1)/2)&1L){
        cout<<"NO"<<endl;
        return;
    } 

    // n = 0, 3 mod 4

    vi v1, v2;
    ll j = 0;
    if( n%4 ){
        v1.pb(1);
        v1.pb(2);
        v2.pb(3);
        j = 4;
    }
    else{
        v1.pb(1);
        v1.pb(4);
        v2.pb(2);
        v2.pb(3);
        j = 5;
    }
    for(ll i=j; i<=n; i+=4){
        v1.pb(i);
        v1.pb(i+3);
        v2.pb(i+1);
        v2.pb(i+2);
    }

    cout<<"YES"<<endl;
    cout<<v1.size()<<endl;
    for(auto i : v1) cout<<i<<" ";
    cout<<endl;
    cout<<v2.size()<<endl;
    for(auto i : v2) cout<<i<<" ";

}
