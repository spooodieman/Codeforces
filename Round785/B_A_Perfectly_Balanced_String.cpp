#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    string s; cin >> s;
    set<char> vis;
    string rep = "";
    f(i,0,s.size()){
        if(vis.count(s[i])) break;
        rep += s[i];
        vis.insert(s[i]);
    }
    ll ind = 0;
    ll n = rep.size();
    f(i,n,s.size()){
        if(s[i] != rep[ind%n]){
            NO;
            return;
        }
        ind++;
    }
    YES;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}