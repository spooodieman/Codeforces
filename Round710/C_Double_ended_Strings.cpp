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
    string a,b; cin >> a >> b;
    ll ans = a.size() + b.size();
    if(a.size() > b.size())swap(a,b);
    f(i,0,a.size()){
        f(j,1,a.size()-i+1){
            if (b.find(a.substr(i, j)) != std::string::npos){
                ans = min(ans,((ll)a.size() - j) + ((ll)b.size() - j));
            }
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}