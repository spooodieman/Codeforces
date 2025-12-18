#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    string s; cin >> s;
    if(s.front() == 'f'){
        ll n ; cin >> n ;
        vector<ll> arr(n);
        for(auto &i : arr) cin >> i;
        for(ll i = 0 ; i < n ; i ++){
            ll curr = arr[i];
            while(curr){
                cout << (char)('a' + (curr%25));
                curr /= 25;
            }
            cout << 'z';
        } 
        cout << endl;
    }
    else{
        cin >> s;
        ll n = s.size();
        ll count = 0;
        for(char c : s) count += (c == 'z');
        cout << count << '\n';
        string t = "";
        for(ll i = 0; i < n; i ++){
            ll curr = 0;
            if(s[i] == 'z'){
                ll mult = 1;
                ll ans = 0;
                for(ll i = 0 ; i < t.size(); i++){
                    ans += mult * (t[i]-'a');
                    mult *= 25;
                }
                cout << ans << " ";
                t = "";
            }
            else t += s[i]; 
        }
        cout << endl;
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}