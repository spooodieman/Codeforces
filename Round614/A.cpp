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
    ll n,q; cin >> n >> q;
    ll block = 0;
    vector<vi> curr(2, vi(n, 0));
    for(ll i = 0; i < q; i++){
        ll x,y ; cin >> x >> y;
        x--;y--;
        ll check = ((curr[x][y] == 0)?1:-1);
        curr[x][y] = 1-curr[x][y];
        for(ll j = -1; j<= 1; j++){
            if(y + j <0 || y + j >= n) continue;
            else if (curr[1-x][y+j]){
                block += check;
            }
        }
        if(block == 0) YES;
        else NO;
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
}