#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n,m; cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    invl(a);
    invl(b);
    vector<ll> pre(m+1,n);
    vector<ll> suff(m+1,-1);
    pre[0] = -1;
    suff[m] = n;
    ll index = 0;
    for(ll i = 0; i < n && index < m; i++){
        if(a[i] >= b[index]){
            pre[index+1] = i;
            index++;
        }
    }
    index = m-1;
    for(ll i = n-1; i >= 0 && index >= 0; i--){
        if(a[i] >= b[index]){
            suff[index] = i;
            index--;
        }
    }
    // cout << "pree ";
    // for(ll x : pre) cout << x << " ";
    // cout << '\n'; 
    
    // cout << "post ";
    // for(ll x : suff) cout << x << " ";
    // cout << '\n';

    if(pre[m] < n){
        cout << 0 << '\n';
        return;
    }
    ll answer = 1e10;
    for(ll i = 0; i < m; i++){
        if(pre[i] < suff[i+1]){
            answer = min(answer,b[i]);
        }
    }
    if(answer == (1e10)){
        cout << -1 << '\n';
    }
    else cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}