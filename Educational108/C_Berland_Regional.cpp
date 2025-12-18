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
    vi arr(n),str(n); invl(arr); invl(str);
    map<ll,vi> mp;
    f(i,0,n){
        mp[arr[i]].push_back(str[i]);
    }
    for(auto &x : mp){
        sort(x.second.rbegin(),x.second.rend());
        f(i,1,x.second.size()){
            x.second[i] += x.second[i-1];
        }
    }
    vi pref(n,0);

    for(auto &x : mp){
        f(i,0,x.second.size()){
            ll siz = x.second.size();
            pref[i] += x.second[siz - (siz%(i+1)) - 1];
        }
    }

    f(i,0,n) cout << pref[i] << ' ';
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}