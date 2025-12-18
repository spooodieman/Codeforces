#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(auto p = q; p < n; p++)

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll a,b; cin >> a >> b;
    ll len1 = 0,len2 = 0;
    ll cop = a;
    while(cop){
        len1++;
        cop >>= 1;
    }
    cop = b;
    while(cop){
        len2++;
        cop >>= 1;
    }
    if(len2 > len1){
        cout << "-1\n";
        return;
    }
    vector<ll> ans;
    f(i,0,len1){
        if(((1LL << i)&a) != ((1LL << i)&b)){
            ans.push_back(1LL << i);
        }
    }
    if(ans.size() == 0){
        cout << "0\n";
    }
    else{
        cout << ans.size() << '\n';
        for(auto x : ans) cout << x << " ";
        cout << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}