#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    string n; cin >> n;
    ll answer = 0;
    ll index = n.size() - 1;
    while(n[index] == '0'){
        answer++;
        index--;
    }
    index--;
    while(index >= 0){
        if(n[index] != '0') answer++;
        index--;
    }
    cout << answer << '\n';
}


int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}