#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invll(v) for(auto &x: v) cin >> x;
#define sortall(v) sort(v.begin(),v.end());

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll num; cin >> num;
    if(!(num%2)){
        cout << -1 << '\n';
        return;
    }
    for(ll i = 1; i <= num; i+= 2) cout << i << " ";
    for(ll i = 2; i <= num; i+= 2) cout << i << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}