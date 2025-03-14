#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size, l, r; cin >> size >> l >> r;
    for(ll i = 1; i <= size;i++){
        if(i > l)cout << -1 << " ";
        else if(i < r) cout << -1 << " ";
        else cout << 1 << " ";
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}