#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    string s; cin >> s;
    ll x = 0;
    ll y = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == 'N') x++;
        else if(s[i] == 'S')x--;
        else if(s[i] == 'E')y++;
        else y--;
    }
    if((x&1) || (y&1)){
        cout << "NO\n";
        return;
    }
    if(x == 0 && y == 0){
        if(s.size() <= 2){
            cout << "NO\n";
            return;
        }
        string ans(n,'.');
        ans[0] = 'R';
        char target;
        if(s.front() == 'W') target = 'E';
        if(s.front() == 'E') target = 'W';
        if(s.front() == 'N') target = 'S';
        if(s.front() == 'S') target = 'N';

        for(ll i = 0; i < n; i++){
            if(s[i] == target){
                ans[i] = 'R';
                break;
            }
        }
        for(ll i = 0; i < n ; i++){
            if(ans[i] == '.') ans[i] = 'H';
        }
        cout << ans << '\n';
        return;
    }
    ll initx = abs(x);
    ll inity = abs(y);
    string ans(n, '.');
    for(ll i = 0; i < n; i++){
        if(initx == abs(x)/2 && (s[i] == 'N' || s[i] == 'S')) continue;
        if(inity == abs(y)/2 && (s[i] == 'E' || s[i] == 'W')) continue;
        if(x < 0 && s[i] == 'S'){
            initx--;
            ans[i] = 'R';
        }
        else if(x > 0 && s[i] == 'N'){
            initx--;
            ans[i] = 'R';
        }
        if(y < 0 && s[i] == 'W'){
            inity--;
            ans[i] = 'R';
        }
        else if(y > 0 && s[i] == 'E'){
            inity--;
            ans[i] = 'R';
        }
    }
    for(ll i = 0; i < n; i++){
        if(ans[i] == '.') ans[i] = 'H';
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}