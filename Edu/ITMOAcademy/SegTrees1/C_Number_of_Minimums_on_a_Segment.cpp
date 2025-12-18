#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Node {
    ll mn;
    ll cnt;
};

vector<Node> seg;
vector<ll> arr;

Node combine(const Node &a, const Node &b) {
    if (a.mn == b.mn) return {a.mn, a.cnt + b.cnt};
    else if (a.mn < b.mn) return a;
    else return b;
}

void build(ll v, ll tl, ll tr) {
    if (tl == tr) {
        seg[v] = {arr[tl], 1};
        return;
    }
    ll mid = (tl + tr) / 2;
    build(v * 2, tl, mid);
    build(v * 2 + 1, mid + 1, tr);
    seg[v] = combine(seg[v * 2], seg[v * 2 + 1]);
}

void update(ll v, ll tl, ll tr, ll pos, ll val) {
    if (tl == tr) {
        seg[v] = {val, 1};
        return;
    }
    ll mid = (tl + tr) / 2;
    if (pos <= mid) update(v * 2, tl, mid, pos, val);
    else update(v * 2 + 1, mid + 1, tr, pos, val);
    seg[v] = combine(seg[v * 2], seg[v * 2 + 1]);
}

Node query(ll v, ll tl, ll tr, ll l, ll r) {
    if (l > r) return {LLONG_MAX, 0};
    if (l == tl && r == tr) return seg[v];
    ll mid = (tl + tr) / 2;
    Node left = query(v * 2, tl, mid, l, min(r, mid));
    Node right = query(v * 2 + 1, mid + 1, tr, max(l, mid + 1), r);
    return combine(left, right);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    arr.resize(n);
    seg.resize(4 * n);
    for (ll i = 0; i < n; i++) cin >> arr[i];
    build(1, 0, n - 1);

    while (m--) {
        ll type;
        cin >> type;
        if (type == 1) {
            ll i, v;
            cin >> i >> v;
            update(1, 0, n - 1, i, v);
        } else {
            ll l, r;
            cin >> l >> r;
            Node ans = query(1, 0, n - 1, l, r - 1);
            cout << ans.mn << " " << ans.cnt << "\n";
        }
    }
}
