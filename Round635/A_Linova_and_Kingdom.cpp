#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(p,q,n) for(ll p = q; p < n; p++)
#define vi vector<ll>

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    vector<vi> adj(n);
    f(i,0,n-1){
        ll x,y; cin >> x >> y;
        x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<int> depth(n,0), parent(n,-1);
    vector<int> sizev(n,0);

    vector<int> order; order.reserve(n);
    order.push_back(0);
    parent[0] = 0; depth[0] = 1;
    for(size_t idx=0; idx<order.size(); ++idx){
        int u = order[idx];
        for(int v: adj[u]){
            if(v == parent[u]) continue;
            parent[v] = u;
            depth[v] = depth[u] + 1;
            order.push_back(v);
        }
    }

    for(int i = (int)order.size()-1; i >= 0; --i){
        int u = order[i];
        sizev[u] = 1;
        for(int v: adj[u]){
            if(v == parent[u]) continue;
            sizev[u] += sizev[v];
        }
    }


    vector<ll> det(n);
    for(int i=0;i<n;i++) det[i] = 1LL*sizev[i] - 1LL*depth[i];
    ll keep = n - k;

    if(keep <= 0){ cout << 0 << '\n'; return 0; }
    nth_element(det.begin(), det.begin() + (keep - 1), det.end(), greater<ll>());
    ll ans = 0;
    for(ll i = 0; i < keep; ++i) ans += det[i];

    cout << ans << '\n';
    return 0;
}
