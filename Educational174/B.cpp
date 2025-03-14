#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

ll checkNeighbour(vector<vector<ll>> mat, ll i, ll j){
    if(i - 1 >= 0 && mat[i][j] == mat[i-1][j])return 1;
    if(j-1 >= 0 && mat[i][j] == mat[i][j-1])return 1;
    return 0;
}

void solve(){
    ll m, n; cin >> m >> n;
    map<ll,ll> ncount;
    ll maxFreq = 0;
    ll maxElement = -1;
    vector<vector<ll>> mat(m,vector<ll>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0 ; j < n; j++){ 
            cin >>mat[i][j];
            if(maxElement == -1) maxElement = mat[i][j];
            if(ncount[mat[i][j]] == 2) continue;
            ncount[mat[i][j]] = max(checkNeighbour(mat,i,j)+1,ncount[mat[i][j]]);
            if(ncount[mat[i][j]] > maxFreq){
                maxFreq = ncount[mat[i][j]];
                maxElement = mat[i][j];
            }
        }
    }
    ll answer= 0;
    if(maxFreq == 0){
        cout << (m*n) - 1 << '\n';
    }
    for(auto x: ncount){
        if(x.first == maxElement) continue;
        answer += x.second;
    }
    cout << answer << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}