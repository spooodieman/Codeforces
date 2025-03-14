#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size; cin >> size;
    map<ll,ll> freq;
    freq[1] = 0;
    for(ll i = 0; i < size; i++){
        ll val; cin >> val;
        freq[val]++;
    }
    ll answer = freq[4];
    answer += freq[2]/2;
    freq[2] %= 2;
    if(freq[2] == 1){
        answer+=1;
        freq[1] -= 2;
    }
    if(freq[3] >= freq[1]){
        answer += freq[3];
    }
    else{
        answer += freq[3];
        freq[1] -= freq[3];
        answer += (freq[1]/4) + ((freq[1]%4)?1:0);
    }
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
}   