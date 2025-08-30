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
    sort(all(arr));
    set<ll> curr(all(arr));
    if(curr.size() == 1){
        cout << -1 << '\n';
        return;
    }
    vi a;
    vi b;
    ll ind = n-1;
    while(arr[ind] == arr.back()){
        b.push_back(arr[ind--]);
    }
    f(i,0,ind+1){
        a.push_back(arr[i]);
    }
    cout << a.size() << " " << b.size() << '\n';
    f(i,0,a.size()) cout << a[i] << " ";
    cout << '\n';
    f(i,0,b.size()) cout << b[i] << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}