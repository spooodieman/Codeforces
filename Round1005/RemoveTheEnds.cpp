#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    vector<ll> vals(size);
    for(ll i = 0; i < size; i++) cin >> vals[i];
    vector<ll> pfx(size,0);
    pfx[0] = ((vals[0] > 0)? vals[0]:0);
    vector<ll> sfx(size,0);
    sfx[size-1] = ((vals[size-1] < 0)? abs(vals[size-1]): 0);
    for(ll i = 1; i < size; i++){
        pfx[i] = pfx[i-1];
        sfx[size-i-1] = sfx[size-i];
        if(vals[i] > 0) pfx[i] += vals[i];
        if(vals[size-1-i] < 0)sfx[size-i-1] += abs(vals[size-i-1]);
    }
    ll answer = 0;
    for(ll i = 0; i < size; i++) answer = max(answer,pfx[i] + sfx[i]);
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}