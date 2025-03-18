#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n,m; cin >> n >> m;
    vector<pair<ll,ll>> indices;
    vector<vector<char>> mat(n,vector<char>(m));
    for(ll i = 0 ; i < n; i++){
        for(ll j = 0; j < m; j++){ 
            cin >> mat[i][j];
            if(mat[i][j] == '#'){
                pair<ll,ll> curr;
                curr.first = i+1;
                curr.second = j+1;
                indices.push_back(curr);
            }
        }
    }
    ll size = indices.size()/2;
    cout << indices[size].first << " " << indices[size].second << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}