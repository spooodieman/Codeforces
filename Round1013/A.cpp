#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invll(v) for(auto &x: v) cin >> x;
#define sortall(v) sort(v.begin(),v.end());

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    map<ll,ll> freq;
    freq[0] = 3;
    freq[1] = 1;
    freq[3] = 1;
    freq[2] = 2;
    freq[5] = 1;
    ll answer = 0;
    for(ll i = 1; i <= size; i++){
        bool solved = true;
        ll val; cin >> val;
        if(answer != 0) continue;
        if(freq[val] == 0) continue;
        freq[val]--;
        for(auto x: freq){
            if(x.second != 0){
                solved = false;
                break;
            }
        }
        if(solved) answer = i;
    }
    cout << answer << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}