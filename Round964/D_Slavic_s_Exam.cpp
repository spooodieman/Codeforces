#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    string s,t; cin >> s >> t;
    ll q = 0;
    for(char c : s) q += c == '?';
    if(q >= t.size()){
        cout<<"YES\n";
        ll ind = 0;
        for(ll i = 0; i < s.size(); i++){
            if(ind == t.size() && s[i] == '?') s[i] = 'a';
            else if(s[i] == '?') s[i] = t[ind++];
        }
        cout << s << '\n';
        return;
    }
    ll ind = 0;
    for(ll i = 0; i < s.size(); i++){
        if(ind == t.size() && s[i] == '?'){
            s[i] = 'a';
        }
        else if(ind == t.size()) continue;
        else if(s[i] == t[ind]) ind++;
        else if(s[i] == '?') s[i] = t[ind++];
    }
    if(ind == t.size()){
        cout << "YES\n" << s << '\n';
        return;
    }
    cout << "NO\n";
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}