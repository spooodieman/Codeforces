#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size, k; cin >> size >> k;
    map<ll,ll> freq;
    for(ll i = 0; i < size; i++){
        ll val; cin >> val;
        if(val >= k) continue;
        freq[val]++;
    }
    ll answer = 0;
    for(auto &x: freq){
        if(freq[k - x.first] == 0 || x.second == 0) continue;
        if(k-x.first == x.first){
            answer += x.second/2;
            continue;
        }
        else answer += min(x.second,freq[k-x.first]);
        freq[k-x.first] = 0;
    }
    cout << answer << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}