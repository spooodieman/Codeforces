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
    vector<string> arr(10); invl(arr);
    vector<vi> score(10,vi(10,0));
    f(i,0,5){
        f(j,i,10-i-1){
            score[i][j] = i+1;
        }
        f(j,i,10-i-1){
            score[j][10-i-1] = i+1;
        }
        for(ll j = 10-i-1; j > i; j--){
            score[10-i-1][j] = i+1;
        }
        for(ll j = 10-i-1; j >= i; j--){
            score[j][i] = i+1;
        }
    }
    ll ans = 0;
    f(i,0,10){
        f(j,0,10){
            if(arr[i][j] == 'X') ans += score[i][j];
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}