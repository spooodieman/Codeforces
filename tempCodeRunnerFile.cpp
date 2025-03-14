#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int checkNeighbour(vector<vector<ll>> mat, ll i, ll j){
    int ans = 0;
    if(i - 1 >= 0 && mat[i][j] == mat[i-1][j]) ans++;
    if(i + 1 < mat.size() && mat[i][j] == mat[i+1][j]) ans++;
    if(j-1 >= 0 && mat[i][j] == mat[i][j-1])ans++;
    if(j+1 < mat[0].size() && mat[i][j] == mat[i][j+1])ans++;
    return ans;
}

void solve(){
    ll m, n; cin >> m >> n;
    map<ll,int> ncount;
    set<ll> unique;
    ll maxFreq = 0;
    
    vector<vector<ll>> mat(m,vector<ll>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0 ; j < n; j++) cin >>mat[i][j];
    }
    ll maxElement = mat[0][0];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            unique.insert(mat[i][j]);
            ncount[mat[i][j]] = max(min(checkNeighbour(mat,i,j),2),ncount[mat[i][j]]);
            if(ncount[mat[i][j]] > maxFreq){
                maxFreq = ncount[mat[i][j]];
                maxElement = mat[i][j];
            }
        }
    }
    ll answer= 0;
    for(auto x: unique){
        if(x == maxElement) continue;
        answer += ((ncount[x] == 0)?1:ncount[x]);
    }
    cout << answer << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}