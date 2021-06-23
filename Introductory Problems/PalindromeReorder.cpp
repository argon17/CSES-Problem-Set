void solve()
{
    string s;
    cin>>s;
    int c[26]={}, cnt=0;
    for(char d : s){
        ++c[d-'A'];
    }
    rep(i, 0, 26){
        cnt += c[i]&1;
    }
    if(cnt>1){
        cout<<"NO SOLUTION";
        return;
    }
    string t;
    rep(i, 0, 26){
        if((c[i]&1)^1){
            rep(j, 0, c[i]/2) t += (char)(i+'A');
        }
    }
    cout<<t;
    rep(i, 0, 26){
        if(c[i]&1){
            rep(j, 0, c[i]) cout<<(char)(i+'A');
        }
    }
    reverse(all(t));
    cout<<t;
}
