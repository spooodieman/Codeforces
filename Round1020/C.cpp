#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    invl(a);
    invl(b);
    bool lost = true;
    ll sample = 0;
    for(ll i = 0; i < n; i++){
        if(b[i] != -1){
            sample = a[i] + b[i];
            lost = false;
            break;
        }
    }
    if(!lost){
        for(ll i = 0; i < n; i++){
            if(b[i] == -1){
                if((sample - a[i] < 0) || (sample - a[i] > k)){
                    cout << 0 << '\n';
                    return;
                }
            }
            else{
                if(a[i] + b[i] != sample){
                    cout << 0 << '\n';
                    return;
                }
            }
        }
        cout << 1 << '\n';
        return;
    }
    ll mx = 0;
    ll mn = 1e9 + 1;
    for(ll x : a) {
        mx = max(x,mx);
        mn = min(mn,x);
    }
    if(mx > k){
        cout << 0 << '\n';
    }
    else cout << (((k+mn)-mx)+1) << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}