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
    string s; cin >> s;
    ll five = false;
    ll zero =0;
    ll ans1 = 0;
    ll ans2 = 0;
    ll ans3 = 0;
    vi valid;
    for(ll i = s.size()-1; i>=0; i--){
        if(s[i] == '0' && zero){
            valid.push_back(ans1);
            break;
        }
        else if(s[i] == '0') zero++;
        else ans1++;
    }
    for(ll i = s.size()-1; i>=0; i--){
        if((s[i] == '2' || s[i] == '7') && five){
            valid.push_back(ans2);
            break;
        }
        else if(s[i] == '5' && !five) five = true;
        else ans2++;
    }
    zero = 0;
    for(ll i = s.size()-1; i>=0; i--){
        if(s[i] == '5' && zero){
            valid.push_back(ans3);
            break;
        }
        else if(s[i] == '0') zero++;
        else ans3++;
    }
    cout << *min_element(all(valid)) << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}