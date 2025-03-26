#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;
bool yneos(bool a,bool upp=false){if(a){cout<<(upp?"YES\n":"Yes\n");}else{cout<<(upp?"NO\n":"No\n");}return a;}
void solve(){
    ll size, k; cin >> size >> k;
    string message; cin >> message;
    string r = message;
    sort(r.begin(),r.end());
    if(r[0] == r.back()){
        cout << "NO" << '\n';
        return;
    }
    r = message;
    reverse(r.begin(),r.end());
    yneos(message < r || k != 0, true);
   
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}