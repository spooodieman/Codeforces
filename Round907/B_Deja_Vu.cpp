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

ll apow(ll a, ll b){
    ll res = 1;
    for(ll i = 0; i < b; i++) res *= a;
    return res;
}

void solve(ll tt = 0){
    ll n,k; cin >> n >> k;
    vi arr(n); invl(arr);
    vi b;
    f(i,0,k){
        ll x; cin >> x;
        if(i == 0) b.push_back(x);
        else{
            if(b.back() > x) b.push_back(x);
        }
    }
    for(ll i: b){
        ll curr = apow(2,i);
        for(ll j = 0; j < n; j++){
            if(arr[j]%curr == 0){
                arr[j] += (apow(2,i-1));
            }
        }
    }
    for(ll x : arr) cout << x << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}