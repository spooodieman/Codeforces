#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    vector<vector<ll>> vals(size, vector<ll>(size));
    for(ll i = 0; i < size; i++){
        for(ll j = 0; j < size; j++){
            cin >> vals[i][j];
        }
    }
    ll ans = 0;
    for(int i = 0 ; i < size; i++){
        if(vals[i][i] < 0) ans = max(abs(vals[i][i]),ans);
    }
    for(int i = 1; i < size-1; i++){
        ll curr = 0;
        for(int j = 0; j < size; j++){
            curr = max(curr,abs(vals[j][j+i]));
        }
        ans += curr;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}