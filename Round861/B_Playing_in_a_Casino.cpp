#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,m; cin >> n >> m;
    vector<vi> arr(m,vi(n));

    for(ll i = 0; i < n; i++)

        for(ll j = 0 ; j < m; j++)  

            cin >> arr[j][i];
    
    for(ll i = 0; i < m; i++) sort(all(arr[i]));
    
    ll ans = 0;

    for(ll i = 0; i < m; i++){

        vi pref(n,0);
        pref[0] = arr[i][0];

        for(ll j = 1; j < n; j++)
        
            pref[j] = arr[i][j] + pref[j-1];
        
        for(ll j = 0; j < n; j++)

            ans += arr[i][j] * (j+1) - pref[j]; 
        

    }

    cout << ans << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}