#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n; cin >> n;
    string s; cin >> s;
    if(s[0] == 'A' && s[n-1] == 'A'){
        cout << "Alice" << '\n';
    }
    else if(s[0] == 'B' && s[n-1] == 'B'){
        cout << "Bob" << '\n';
    }
    else if(s[0] == 'A' && s[n-1] == 'B'){
        for(ll i = n-2; i >= 0; i--){
            if(s[i] == 'B'){
                cout << "Bob" << '\n';
                return;
            }
        }
        cout << "Alice" << '\n';
    }
    else{
        if(s[n-2] == 'B') cout << "Bob" << '\n';
        else cout << "Alice" << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}