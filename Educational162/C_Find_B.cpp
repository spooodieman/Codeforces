#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,q; cin >> n >> q;
    vector<ll> arr(n); for(auto &i : arr) cin >> i;
    vector<ll> pref(n+1,0);
    vector<ll> oneCount(n+1,0);
    for(ll i = 1; i <= n; i++){
        pref[i] = pref[i-1] + arr[i-1];
        oneCount[i] = oneCount[i-1] + (arr[i-1] == 1);
    }
    for(ll i = 0; i < q; i++){
        ll l,r; cin >> l >> r;
        if(r == l){
            cout << "NO\n";
            continue;
        }
        l--;
        ll num = r-l;
        if((pref[r] - pref[l]) - (oneCount[r] - oneCount[l]) < num)cout << "NO\n";
        else cout << "YES\n";
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}