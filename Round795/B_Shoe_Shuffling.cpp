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
    map<ll,vi> freq;
    f(i,0,n) freq[arr[i]].push_back(i);
    vi ans(n);
    for(auto x : freq){
        if(x.second.size() == 1){
            cout << -1 << '\n';
            return;
        }
        else{
            ll siz = x.second.size();
            for(ll i = 1; ; i = (i + 1)%siz){
                if(i == 0){
                    ans[x.second.back()] = x.second[0];
                    break;
                }
                ans[x.second[i-1]] = x.second[i];
            }
        }
    }
    for(ll i : ans ) cout << i + 1 << ' ';
    cout << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}