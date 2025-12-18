#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n);
    for(ll &i : arr) cin >> i;
    set<ll> st(all(arr));
    if(st.size() == 1){
        cout << "0\n";
        return;
    }
    else if(st.size() == 2){
        cout << 2 * (*(--st.end()) - *st.begin()) << '\n'; 
    }
    else{
        auto start = st.begin();
        auto end = --st.end();
        ll mx = *end - *start;
        auto newEnd = --st.end();
        auto newStart = st.begin();
        ll dif = max(*end - *(--newEnd), *(++newStart) - *start);
        cout << mx + dif << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}