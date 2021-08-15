void argon17()
{
    int n, q;
    cin>>n>>q;
    for(int i=0; i<n; ++i) cin>>arr[i];
    build_tree(1, 0, n-1);
    memset(lazy, 0, sizeof lazy);
    while(q--){
        int t; cin>>t;
        if(t==1){
            int l, r, v;
            cin>>l>>r>>v;
            --l; --r;
            update_tree(1, 0, n-1, l, r, v);
        }
        else{
            int ind; cin>>ind;
            --ind;
            cout<<query_tree(1, 0, n-1, ind, ind)<<endl;
        }
    }
}
 