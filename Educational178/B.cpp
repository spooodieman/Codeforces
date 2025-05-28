#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void pairsort(vector<ll> &a, vector<ll> &b)
{
    ll n = a.size();
    pair<ll, ll> pairt[n];

    for (ll i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (ll i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}

void solve(){
    ll n; cin >> n;
    vector<ll> arrcopy(n);
    vector<ll> arr(n);
    vector<ll> pos(n);
    invl(arr);
    for(ll i = 0; i < n; i++) {
        pos[i] = i;
        arrcopy[i] = arr[i];
    }
    pairsort(arr,pos);
    ll req = n-1;
    ll ind = n-1;
    ll sum = 0;
    vector<ll> ans(n,0);
    for(ll i = 0; i < n; i++){
        ans[i] = sum + arrcopy[pos[req]];
        while(((n - i-1) <= pos[req]) && req > 0){ 
            req--;
        }
        sum += arrcopy[ind--];
    }
    // cout << "POS" << '\n';
    // for(ll x : pos) cout << x << " ";
    // cout << '\n';
    for(ll i = 0; i < n; i++) cout << ans[i] << ' ';
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}