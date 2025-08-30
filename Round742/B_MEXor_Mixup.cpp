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

vi arr;

void precompute(){
    arr.push_back(0);
    f(i,0,3e5 + 1){
        arr.push_back(i ^ arr.back());
    }
}

void solve(ll tt = 0){
    ll a,b; cin >> a >> b;
    ll curr = arr[a];
    if(curr == b){
        cout << a << '\n';
    }
    else if((curr ^ a) == b){
        cout << a + 2 << '\n';
    }
    else cout << a + 1 << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    precompute();
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}