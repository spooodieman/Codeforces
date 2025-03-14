#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    int size, l , r; cin >> size >> l >> r;
    vector<ll> vals(size);
    vector<ll> vals1;
    vector<ll> vals2;
    for(ll &x : vals) cin >> x;
    for(int i = 0; i < r; i++) vals1.push_back(vals[i]);
    for(int i = l-1; i < size; i++) vals2.push_back(vals[i]);
    sort(vals1.begin(),vals1.end());
    sort(vals2.begin(),vals2.end());
    ll ans = 0;
    ll ans1 = 0;
    ll range = r - l;
    for(ll i = 0 ; i <= range; i++){
        ans += vals1[i];
        ans1 += vals2[i];
    }
    cout << min(ans,ans1) << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}