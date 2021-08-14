struct node
{
    int val;
    node()
    {
        val = 0; // identity element for the function
    }
    node(int x)
    {
        val = x;
    }
    void function(node &x, node &y)
    {
        val = x.val + y.val; // function implementation
    }
};

struct update
{
    int val;
    update(int x)
    {
        val = x;
    }
    void apply(node &x)
    {
        x.val = val;
    }
};

void argon17()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    read(a);
    SegmentTree<node, update> st(a, n);
    while (q--) {
        int t;
        cin>>t;
        int l, r;
        cin >> l >> r;
        --l; --r;
        if(t==2) cout << st.make_query(l, r).val << endl;
        else st.make_update(l, r+1);
    }
}
