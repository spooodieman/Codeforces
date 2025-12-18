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

string next_string(string s) {
    ll i = s.size() - 1;
    while (i >= 0 && s[i] == 'z') {
        s[i] = 'a';
        i--;
    }
    if (i < 0) s = 'a' + s;
    else s[i]++;
    return s;
}

void solve(ll tt = 0){
    ll n; cin >> n;
    string s; cin >> s;
    set<string> st;
    f(i,1,n+1){
        f(j,0,n-i+1){
            st.insert(s.substr(j,i));
        }
    }

    string curr = "a";
    while(true){
        if(!st.count(curr)){
            cout << curr << '\n';
            return;
        }
        curr = next_string(curr);
    }

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}