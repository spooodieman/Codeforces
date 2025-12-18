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
    ll fir = arr[0];
    ll sec = arr[1];
    bool firstPos = true;
    bool secondPos = true;
    for(ll i = 2; i < n; i+= 2){
        fir = __gcd(fir,arr[i]);
    }
    for(ll i = 1; i < n; i+= 2){
        if(arr[i]%fir == 0){
            firstPos = false;
            break;
        }
    }
    for(ll i = 1; i < n; i+= 2){
        sec = __gcd(sec,arr[i]);
    }
    for(ll i = 0; i < n; i+= 2){
        if(arr[i]%sec == 0){
            secondPos = false;
            break;
        }
    }
    if(!secondPos && !firstPos){
        cout << "0\n";
        return;
    }
    else if(firstPos){
        cout << fir << '\n';
    }
    else cout << sec << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}