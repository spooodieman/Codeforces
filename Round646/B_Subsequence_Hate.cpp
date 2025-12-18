#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    string s; cin >> s;
    ll n = s.size();
    ll ans1 = 0;
    ll ans2 = 0;
    ll ans3 = 0;
    ll ans4 = 0;
    ll ans5 = 0;
    ll ans6 = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '1')
            ans1++;
        if(s[i] == '0')
            ans2++;
    }
    bool vis = false;
    for(ll i = 0; i < n; i++){
        if(s[i] == '0' && !vis) vis = true;
        if(vis && s[i] == '1') ans3++;
    }
    vis = false;
    for(ll i = n-1; i >= 0; i--){
        if(s[i] == '0' && !vis) vis = true;
        if(vis && s[i] == '1') ans4++;
    }
    
    vis = false;
    for(ll i = 0; i < n; i++){
        if(s[i] == '1' && !vis) vis = true;
        if(vis && s[i] == '0') ans5++;
    }

    vis = false;
    for(ll i = n-1; i >= 0; i--){
        if(s[i] == '1' && !vis) vis = true;
        if(vis && s[i] == '0') ans6++;
    }
    cout << min({ans1,ans2,ans3,ans4,ans5,ans6});
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}