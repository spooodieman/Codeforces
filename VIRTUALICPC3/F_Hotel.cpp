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
    ll n,a,b; cin >> n >> a >> b;
    int res = 0;
    f(i,0,n){
        string s; cin >> s;
        sort(all(s));
        s.erase(unique(all(s)),s.end());
        int size = s.size();
        if(size == 1){
            res += min({a * 3,b * 2, a + b});
        }
        else if(size == 2){
            res += min({a+b,3*a,2*b});
        }
        else{
            res += min(3*a,3*b);
        }
    }
    cout << res << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}