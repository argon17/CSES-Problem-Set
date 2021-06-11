#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define ppb         pop_back
#define endl        '\n'
#define mii         map<ll,ll>
#define msi         map<string,ll>
#define mis         map<ll, string>
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define repr(i,a,b) for(ll i=b-1;i>=a;i--)
#define trav(a, x)  for(auto& a : x)
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define vii         vector<pair<ll, ll>>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define DEBUG       cerr<<"/n>>>I'm Here<<</n"<<endl;
#define display(x) trav(a,x) cout<<a<<" ";cout<<endl;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
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
int main()
{
    FAST
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif
    ll int TEST=1;
    // cin >> TEST;
    //init();
    while(TEST--)
    {
        solve();
    }
}
