struct node
{
    int val;
    node()
    {
        val = inf; // identity element for the function
    }
    node(int x)
    {
        val = x;
    }
    void function(node &x, node &y)
    {
        val = min(x.val, y.val); // function implementation
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
        int l, r;
        cin >> l >> r;
        --l; --r;
        cout << st.make_query(l, r).val << endl;
    }
}
