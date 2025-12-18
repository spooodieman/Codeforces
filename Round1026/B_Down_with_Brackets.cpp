#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    bool close = false;
    string s; cin >> s;
    int n = s.size();
    ll score = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '(') score++;
        else score--;
        if(score == 0 && i != n-1){
            cout << "YES\n";
            return;
        }
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