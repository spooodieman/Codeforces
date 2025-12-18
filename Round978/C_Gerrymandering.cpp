#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<string> arr(2); invl(arr);
    ll ans = 0;
    for(ll i = 0; i < n; i+= 3){
        ll score1 = 0;
        ll count1 = 0;
        ll score2 = 0;
        ll count2 = 0;

        count1 = (arr[0][i] == 'A') + (arr[1][i] == 'A') + (arr[0][i+1] == 'A');
        if(count1 > 1)score1++;  
        count1 = (arr[0][i+2] == 'A') + (arr[1][i+1] == 'A') + (arr[1][i+2] == 'A');
        if(count1 > 1) score1++;
        
        count2 = (arr[0][i] == 'A') + (arr[1][i] == 'A') + (arr[1][i+1] == 'A');
        if(count2 > 1)score2++;  
        count2 = (arr[0][i+2] == 'A') + (arr[0][i+1] == 'A') + (arr[1][i+2] == 'A');
        if(count2 > 1) score2++;

        ans += max({score1,score2});
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}