#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll m,n; cin >> m >> n;
    vector<string> mat(m);
    for(ll i = 0; i < m; i++){
        cin >> mat[i];
    }
    ll count = 0;
    ll count2 = 0;
    for(ll i = 0; i < m; i++){
        ll curr = 0;
        for(ll j = 0; j < n; j++){
            curr ^= (mat[i][j] - '0');
        }
        if(curr == 1)count++;
    }
    for(ll i = 0; i < n; i++){
        ll curr = 0;
        for(ll j = 0; j < m; j++){
            curr ^= (mat[j][i] - '0');
        }
        if(curr == 1)count2++;
    }
    cout << max(count,count2) << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}