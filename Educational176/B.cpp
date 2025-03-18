#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size,k; cin >> size >> k;
    vector<ll> vals(size);
    for(auto &x : vals) cin >> x;
    ll answer = 0;
    if(k == 1){
        answer = vals[0] + vals[size-1];
        for(ll i =1 ; i < size-1; i++){
            answer = max(answer,vals[i] + max(vals[0],vals[size-1]));
        }
        cout << answer << '\n';
        return;
    }
    sort(vals.begin(),vals.end());
    for(ll i = size-1; i >= size-1-k;i--)answer += vals[i];
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}