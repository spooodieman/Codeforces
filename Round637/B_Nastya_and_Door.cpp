    #define AR AnmolRai
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define all(v) (v).begin(), (v).end()

    const ll mod = 1e9 + 7;
    const ll INF = LLONG_MAX >> 1;

    void solve(ll tt = 0){
        ll n,k; cin >> n >> k;
        vector<ll> arr(n); for(auto &i : arr) cin >> i;
        vector<ll> pref(n,0);
        for(ll i = 1; i < n; i++){
            pref[i] = pref[i-1];
            if(i != n-1) 
                pref[i] += (arr[i] > arr[i-1] && arr[i] > arr[i+1]);  
        }
        ll ans = 0;
        ll ind = 0;

        for(ll i = 0; i <= n-k+1; i++){
            ll curr = pref[i + k - 2] - pref[i];
            if(curr > ans){
                ans = curr;
                ind = i;
            }
        }
        cout << ans + 1 << " " << ind + 1 << '\n';
    }

    int main(){
        ios::sync_with_stdio(false); cin.tie(nullptr);
        ll t = 1;
        cin >> t;
        for(ll i = 1; i <= t; i++)
            solve(i);
    }