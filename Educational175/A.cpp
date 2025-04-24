#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n; cin >> n;
    ll answer;
    if(n < 3){
        answer = n + 1;
    }
    else answer = 3;
    if(n < 15){
        cout << answer << '\n';
        return;
    }
    answer += ((max(n/15 - 1,0LL) * 3) + min(3LL,n%15 + 1));
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}