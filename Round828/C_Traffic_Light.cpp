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
    char c; cin >> c;
    string s; cin >> s;
    if(c == 'g'){
        cout << "0\n";
        return;
    }
    vector<ll> ind;
    ll ans = 0;
    f(i,0,n)
        if(s[i] == 'g') 
            ind.push_back(i);
    f(i,0,n){
        if(s[i] == c){
            ll currInd = lower_bound(all(ind),i) - ind.begin();
            if(currInd == ind.size()){
                ans = max(ans,n - i + ind.front());
            }
            else{
                ans = max(ans,ind[currInd] - i);    
            }
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}