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
    ll n; cin >> n;
    vi arr(n); invl(arr);
    bool zero = false;
    f(i,0,n){
        if(arr[i] == 0) {
            zero = true;
            break;
        }
    }
    ll count = 0;
    ll sum = 0;
    f(i,0,n){
        if(arr[i] < 0) count++;
        arr[i] = abs(arr[i]);
        sum += arr[i];
    }
    if(count&1){
        sum -= 2 *  (*min_element(all(arr)));
        cout << sum << '\n';
    }
    else cout << sum << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}