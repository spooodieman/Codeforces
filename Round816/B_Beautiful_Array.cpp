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
    ll n,k,b,s; cin >> n >> k >> b >> s;
    vi arr(n,0); 
    if(b * k > s || (b*k + n * (k-1)) < s){
        cout << -1 << '\n';
        return;
    }
    arr[0] = b*k;
    s -= b*k;
    f(i,0,n){
        if(s > 0 && s >= k-1){
            arr[i] += (k-1);
            s-= (k-1);
        }
        else if(s > 0){
            arr[i] += s;
            break;
        }
        if(s == 0) break;
    }
    f(i,0,n) cout << arr[i] << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}