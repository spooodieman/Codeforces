#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n,t,q;
    cin >> n >> t >> q;
    vector<ll> teachers(t);
    for(ll &teacher: teachers) cin >> teacher;
    sort(teachers.begin(),teachers.end());
    for(ll i = 0; i < q; i++){
        ll query; cin >> query;
        ll l = 0;
        ll r = t - 1;
        ll mid = 0;
        ll upper = 0;
        while(l < r){
            mid = l + (r-l)/2;
            if(teachers[mid] > query) r = mid;
            else if(teachers[mid] < query)l = mid + 1;
            else break;
        }
        if(l == 0 && query < teachers[0]){
            cout << teachers[l] - 1 << '\n';
        }
        else if(l == t-1 && query > teachers[t-1]){
            cout << n - teachers[l] << '\n';
        }
        else{
            cout << (teachers[l] - teachers[l-1])/2 << '\n';
        }
    }
}

int main(){
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}