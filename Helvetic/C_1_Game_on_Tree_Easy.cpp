#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,k; cin >> n >> k;
    vector<vi> adj(n);
    f(i,0,n-1){
        ll x,y; cin >> x >> y;
        x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll goal; cin >> goal;
    goal--;
    ll count = 0;
    ll lastvis = goal;
    while(adj[goal].size() > 1){
        for(ll cur : adj[goal]){
            if(cur != lastvis){
                lastvis = goal;
                goal = cur;
                break;
            }
        }
        count++;
    }
    count++;
    if((n-count)%2 || (count-1)%2) cout << "Ron\n";
    else cout << "Hermione\n";
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}