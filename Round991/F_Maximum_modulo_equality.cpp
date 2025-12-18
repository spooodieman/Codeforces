#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

vector<ll> arr;
vector<ll> seg;

void build(ll v, ll tl, ll tr) {
    if (tl == tr) {
        seg[v] = arr[tl];
        return;
    }
    ll mid = (tl + tr) / 2;
    build(2*v, tl, mid);
    build(2*v+1, mid+1, tr);
    seg[v] = __gcd(seg[2*v], seg[2*v+1]);
}

ll query(ll v, ll tl, ll tr, ll l, ll r){
    if(l > r) return 0;
    if(l == tl && r == tr) return seg[v];
    ll tmid = (tl+tr)/2;
    return __gcd(query(2*v,tl,tmid,l,min(tmid,r)),query(2*v+1,tmid+1,tr,max(tmid+1,l),r));
}

void solve(ll tt = 0) {
    ll n, q; cin >> n >> q;
    vector<ll> a(n); for (auto &i : a) cin >> i;
    if(n == 1){
        for(ll i = 0; i < q; i++){
            ll x,y; cin >> x >> y;
            cout << "0 ";
        }
        cout << '\n';
        return;
    }
    n--;
    arr.resize(n);
    for (ll i = 0; i < n; i++) arr[i] = abs(a[i] - a[i+1]);
    seg.assign(4*n, 0);
    build(1, 0, n-1);
    for (ll i = 0; i < q; i++) {
        ll x, y; cin >> x >> y;
        if(x == y){
            cout << "0 ";
            continue;
        }
        x--; y--;
        cout << query(1, 0, n-1, x, y-1) << " ";
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}