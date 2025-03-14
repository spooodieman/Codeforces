#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    for(ll i = 0; i < size; i++){
        ll curr = 0;
        ll val; cin >> val;
        ll sq = sqrt(val);
        if(sq *sq == val) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
}