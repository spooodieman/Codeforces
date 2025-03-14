#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n,m; cin >> n >> m;
    vector<ll> vals1(n);
    vector<ll> vals2(m);
    for(ll &x : vals1) cin >> x;
    for(ll &x : vals2) cin >> x;

    sort(vals2.begin(),vals2.end());
    if(n == 1){
        cout << "YES" << '\n';
        return;
    }
    ll curr = -1e18;
    for(ll &x: vals1){    
        ll curr1;
        bool canCurr1 = true;
        bool canCurr2 = true;
        if(x >= curr) curr1 = x;
        else canCurr1 = false;
        ll required = lower_bound(vals2.begin(),vals2.end(),curr+x) - vals2.begin();
        if(required == m)canCurr2 = false;
        ll curr2;
        if(canCurr2) curr2 = vals2[required] - x;
        if(!canCurr1 && !canCurr2){
            cout << "NO" << '\n';
            return;
        }
        else if(canCurr1 && canCurr2){
            curr = min(curr2,curr1);
        }
        else curr = ((!canCurr1)? (curr2): (curr1));
    }
    cout << "YES" << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}