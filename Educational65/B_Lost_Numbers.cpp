#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    vi ans(6);
    map<ll,pair<ll,ll>> mp;
    mp[32] = {4,8};
    mp[60] = {4,15};
    mp[64] = {4,16};
    mp[92] = {4,23};
    mp[168] = {4,42};
    mp[120] = {8,15};
    mp[128] = {8,16};
    mp[184] = {8,23};
    mp[336] = {8,42};
    mp[240] = {15,16};
    mp[345] = {15,23};
    mp[630] = {15,42};
    mp[368] = {16,23};
    mp[672] = {16,42};
    mp[966] = {23,42};

    for(ll j = 0; j <= 3; j += 3){
        cout << "? " << 1+j << " " << 2+j << endl << flush;
        ll res; cin >> res;
        vi cand1;
        cand1.push_back(mp[res].first);
        cand1.push_back(mp[res].second);

        cout << "? " << 2+j << " " << 3+j << endl << flush ;
        cin >> res;
        vi cand2;
        cand2.push_back(mp[res].first);
        cand2.push_back(mp[res].second);  
            
        ll common = (cand1[0] == cand2[0] || cand1[0] == cand2[1]) ? cand1[0] : cand1[1];
        ll a = (cand1[0] == common) ? cand1[1] : cand1[0];
        ll b = (cand2[0] == common) ? cand2[1] : cand2[0];
            
        ans[j] = a;
        ans[j+1] = common;
        ans[j+2] = b;
    }
    cout << "! ";
    for(ll x : ans) cout << x << " ";
    cout << endl << flush;
}

int main(){
    solve();
}