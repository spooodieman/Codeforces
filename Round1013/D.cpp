#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invll(v) for(auto &x: v) cin >> x;
#define sortall(v) sort(v.begin(),v.end());

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n,m,k; cin >> n >> m >> k;
    ll toplace = k/n;
    if(k%n != 0)toplace++;
    ll l = 1;
    ll answer = toplace;
    ll r = toplace;
    while(l < r){
        ll mid = l + (r-l)/2;
        ll needed = toplace/mid - 1;
        if(toplace%mid != 0)needed++;
        if(toplace + needed <= m) {
            answer = min(answer,mid);
            r = mid;
        }
        else l = mid+1;
    }
    cout << answer << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}