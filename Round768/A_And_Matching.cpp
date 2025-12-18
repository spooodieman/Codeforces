#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

ll inverse(ll n, ll len){
    ll ans = 0;
    for(ll i = 0; i < len; i++){
        if(( 1 << i ) & n) continue;
        else ans += 1 << i;
    }
    return ans;
}


void solve(ll tt = 0){
    ll n,m; cin >> n >> m;
    ll len = 0;
    ll cop = n;
    while(cop){
        len++;
        cop>>=1;
    }
    len--;
    if(m == n-1){
        if(n == 4){
            cout << "-1\n";
            return;
        }
        cout << n-1 << " " << n-2 << '\n';
        cout << n-3 << " " << 1 << '\n';
        cout << 0 << " " << 2 << '\n';
        for(ll i = 3; i < n/2; i++){
            cout << i << " " << inverse(i,len) << '\n';
        }
        return;
    }
    
    if(m == 0){
        for(ll i = 0; i < n/2; i++) cout << i << " " << inverse(i,len) << '\n';
        return;
    }
    cout << n-1 << " " << m << '\n';
    set<ll> vis;
    vis.insert(n-1);
    vis.insert(m);
    cout << 0 << " " << inverse(m,len) << '\n';
    vis.insert(0);
    vis.insert(inverse(m,len));
    for(ll i = 1; i < n; i++){
        if(vis.count(i)) continue;
        cout << i << " " << inverse(i,len) << '\n';
        vis.insert(i);
        vis.insert(inverse(i,len));
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}   