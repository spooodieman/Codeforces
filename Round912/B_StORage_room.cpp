#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = (1LL << 30) - 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> ans(n,INF);
    vector<vector<ll>> grid(n,vector<ll>(n));
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            cin >> grid[i][j];
            if(i != j){
                ans[i] &= grid[i][j];
                ans[j] &= grid[i][j];
            }
        }
    }
    for(ll i = 0; i < n; i ++){
        for(ll j = i+1; j < n; j++){
            if((ans[i] | ans[j]) != grid[i][j]){
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
    for(ll i : ans) cout << i << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}