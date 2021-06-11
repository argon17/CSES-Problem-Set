void solve()
{
    string s;
    cin>>s;
    char cur = 'A';
    ll ans = 0, mx = 0;
    for(char c : s){
        if(c == cur){
            ++ans;
            mx = max(ans, mx);
        }else{
            cur = c;
            ans = 1;
        }
    }
    cout<<mx<<" ";
}
