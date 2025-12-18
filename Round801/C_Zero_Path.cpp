#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

bool dfs(vector<vector<ll>> arr, ll x, ll y, ll curr){
    
}

void solve(ll tt = 0){
    ll n,m; cin >> n >> m;
    vector<vector<ll>> arr(n,vector<ll>(m));
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < m; j++) 
            cin >> arr[i][j];
    if((n + m - 1)%2 == 1){
        cout << "NO\n";
        return;
    }
    if(dfs(arr,0,0,arr[0][0]))
        cout << "YES\n";
    else cout << "NO\n";

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}