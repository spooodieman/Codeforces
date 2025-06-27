#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define fl(p,n) for(ll p = 0; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<vi> grid(n,vi(n));
    ll  x = n / 2 - (n % 2 == 0 ? 1 : 0);
    ll  y = n / 2 - (n % 2 == 0 ? 1 : 0);
    vector<pair<int, int>> dirs = { {0,1}, {1,0}, {0,-1}, {-1,0} };
    ll steps = 1;
    ll cnt = 0;
    cnt++;
    grid[x][y] = 0;
    while (cnt < n * n) {
        for (int d = 0; d < 4; d++) {
            int dx = dirs[d].first;
            int dy = dirs[d].second;
            for (int i = 0; i < steps; ++i) {
                x += dx;
                y += dy;
                if (x >= 0 && y >= 0 && x < n && y < n) {
                    grid[x][y] = cnt++;
                    if (cnt >= n * n) break;
                }
            }
            if (d % 2 == 1) steps++;
            if (cnt >= n * n) break;
        }
    }
    for(auto x : grid){
        for(ll y : x) cout << y << " ";
        cout << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}

