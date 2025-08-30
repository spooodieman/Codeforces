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
    ll n,k,x; cin >> n >> k >> x;
    if(n == 1 || k == 1){
        NO;
        return;
    }
    if((k == 2) && (x == 1) && (n%2 == 1)){
        NO;
        return;
    }
    YES;
    vi ans;
    if(x != 1){
        f(i,1,n+1) ans.push_back(1);
    }
    else{
        if(n%2 == 0){
            while(n){
                ans.push_back(2);
                n-=2;
            }
        }
        else{
            while(n != 3){
                ans.push_back(2);
                n-=2;
            }
            ans.push_back(3);
        }
    }
    cout << ans.size() << '\n';
    for(ll &i : ans) cout << i << " ";
    cout << '\n';
} 

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}