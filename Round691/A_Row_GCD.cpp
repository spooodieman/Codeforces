#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,m; cin >> n >> m;
    vector<ll> a(n),b(m); 
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;

    if(n == 1){
        for(ll i = 0; i < m; i++){
            cout << a.front() + b[i] << " ";
        }
        return;
    }
    ll g = abs(a[1] - a[0]);
    for(ll i = 1; i < n; i++){
        g = __gcd(g,abs(a[i]-a[i-1]));
    }

    ll mn = *min_element(all(a));

    for(ll i = 0; i < m ; i++){
        cout << __gcd(g,mn + b[i]) << " ";
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}