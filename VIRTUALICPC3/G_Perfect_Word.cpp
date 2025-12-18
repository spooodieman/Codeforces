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
    set<string> st;
    vector<string> s(n);
    f(i,0,n){
        cin >> s[i];
        st.insert(s[i]);
    }
    ll ans = 0;
    for(string x: s){
        bool solved = true;
        f(i,1,x.size()+1){
            f(j,0,x.size()-i+1){
                if(st.count(x.substr(j,i)) == 0){
                    solved = false;
                    break;
                }
            }
        }
        if(solved) ans = max(ans,(ll)x.size());
    }
    cout << ans << '\n';
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}