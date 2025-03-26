#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invll(v) for(auto &x: v) cin >> x;
#define sortall(v) sort(v.begin(),v.end());

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size,k; cin >> size >> k;
    vector<ll> vals(size);
    invll(vals);
    sortall(vals);
    ll answer = 0;
    ll curr = 0;
    ll mn = 1e10;
    for(ll i = size-1; i>= 0; i--){
        if(vals[i] >= k){
            answer++;
            continue;
        }
        curr++;
        mn = min(vals[i], mn);
        if(mn * curr >= k){
            curr = 0;
            mn = 1e10;
            answer++;
        }
    }
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}